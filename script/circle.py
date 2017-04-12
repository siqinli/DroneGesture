#!/usr/bin/env python
import roslib; roslib.load_manifest('teleop_twist_keyboard')
import rospy

from geometry_msgs.msg import Twist

import sys, select, termios, tty

msg = """
Press 't' to start

CTRL-C to quit
"""

moveBindings = {

		't':(0,0,1,0),

		}
def getKey():
	tty.setraw(sys.stdin.fileno())
	select.select([sys.stdin], [], [], 0)
	key = sys.stdin.read(1)
	termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
	return key


def vels(speed,turn):
	return "currently:\tspeed %s\tturn %s " % (speed,turn)

if __name__=="__main__":
    	settings = termios.tcgetattr(sys.stdin)
	
	pub = rospy.Publisher('cmd_vel', Twist, queue_size = 1)
	rospy.init_node('teleop_twist_keyboard')

	speed = rospy.get_param("~speed", 0.5)
	turn = rospy.get_param("~turn", 1.0)
	x = 0
	y = 0
	z = 0
	th = 0
	status = 0

	try:
		print msg
		print vels(speed,turn)
		while(status < 1):
			key = getKey()
			if key in moveBindings.keys():
				x = 0
				y = 0
				z = 1
				th = 0

				twist = Twist()
				twist.linear.x = x*speed; twist.linear.y = y*speed; twist.linear.z = z*speed;
				twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = th*turn
				pub.publish(twist)

				rospy.sleep(2)
				twist = Twist()
				twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
				twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
				pub.publish(twist)
				print "up"

				rospy.sleep(10)
				twist = Twist()
				x = 1
				th = 1
				twist.linear.x = x*speed; twist.linear.y = y*speed; twist.linear.z = z*speed;
				twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = th*turn
				pub.publish(twist)

				rospy.sleep(10)
				twist = Twist()
				x = 0
				y = 0
				z = -1
				th = 0
				twist.linear.x = x*speed; twist.linear.y = y*speed; twist.linear.z = z*speed;
				twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = th*turn
				pub.publish(twist)



	except:
		print "quit"

	finally:
		twist = Twist()
		twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
		twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
		pub.publish(twist)

    		termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)



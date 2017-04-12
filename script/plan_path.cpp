#include <moveit/move_group_interface/move_group.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <moveit_msgs/DisplayRobotState.h>
#include <moveit_msgs/CollisionObject.h>

int main(int argc, char **argv)
{
	ros::init(argc, argv,"plan_path");
	ros::NodeHandle node_handle;
	ros::AsyncSpinner spinner(1);
	spinner.start();

	sleep(20.0);

	moveit::planning_interface::PlanningSceneInterface planning_scene_interface
	
	ros::Publisher display_publisher = node_handle.advertise<moveit_msgs::DisplayTrajectory>("/move_group/display_planned_path", 1, true);
	moveit_msgs::DisplayTrajectory display_trajectory;

	//print the name of the reference frame for the robot
	ROS_INFO("Reference frame: %s", group.getPlanningFrame().c_str());

	geometry_msgs::Pose target_pose1;
	target_pose1[0] = 0;
	target_pose1[1] = 0;
	target_pose1[2] = 1;

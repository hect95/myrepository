#include <ros/ros.h>
#include "std_msgs/String.h"
#include <can_msgs/Frame.h>

#include <socketcan_bridge/configuration.h>
#include <socketcan_bridge/configuration_vars.h>

int main(int argc, char **argv)
{
  	//Initiate ROS
  	ros::init(argc, argv, "configuration_node");

	ROS_INFO("Starting RADAR configuration");
	ROS_INFO("Using RADARCFG_SENSORID: %i , FILTERCFG_INDEX: %i", socketcan_bridge::RADARCFG_SENSORID, socketcan_bridge::FILTERCFG_INDEX);

  	//Create an object of class ConfigurationNode that will take care of everything
  	socketcan_bridge::ConfigurationNode ConfigurationObject;

  	socketcan_bridge::FilterConfigurationNode FilterObject;

  	socketcan_bridge::CollisionConfigurationNode CollisionObject;

  	socketcan_bridge::CollisionRegionConfigurationNode RegionObject;
  	
  	sleep(8);

  	ros::spinOnce();

	ROS_INFO("Done !");
	

  	return 0;
}

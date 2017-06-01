#include <boost/shared_ptr.hpp>

#include <pluginlib/class_loader.h>
#include "pluginlib_arrayutil_base/arrayutil_base.h"
//#include "pluginlib_arrayutil_sub/sum.h"

int main()
{
  pluginlib::ClassLoader<arrayutil_base::ArrayUtil> arrayutil_loader("pluginlib_arrayutil_sub", "arrayutil_base::ArrayUtil");

  try
  {
    boost::shared_ptr<arrayutil_base::ArrayUtil> sum = arrayutil_loader.createInstance("pluginlib_arrayutil_sub/Sum");
    //add->get_numbers(10.0,10.0);
    double result = sum->operate();

    ROS_INFO("Sum: %.2f", result);
  }
  catch(pluginlib::PluginlibException& ex)
  {
    ROS_ERROR("The plugin failed to load for some reason. Error: %s", ex.what());
  }

  try
  {
    boost::shared_ptr<arrayutil_base::ArrayUtil> ave = arrayutil_loader.createInstance("pluginlib_arrayutil_sub/Ave");
    //add->get_numbers(10.0,10.0);
    double result = ave->operate();

    ROS_INFO("Ave: %.2f", result);
  }
  catch(pluginlib::PluginlibException& ex)
  {
    ROS_ERROR("The plugin failed to load for some reason. Error: %s", ex.what());
  }

  try
  {
    boost::shared_ptr<arrayutil_base::ArrayUtil> min = arrayutil_loader.createInstance("pluginlib_arrayutil_sub/Min");
    //add->get_numbers(10.0,10.0);
    double result = min->operate();

    ROS_INFO("Min: %.2f", result);
  }
  catch(pluginlib::PluginlibException& ex)
  {
    ROS_ERROR("The plugin failed to load for some reason. Error: %s", ex.what());
  }

  try
  {
    boost::shared_ptr<arrayutil_base::ArrayUtil> max = arrayutil_loader.createInstance("pluginlib_arrayutil_sub/Max");
    //add->get_numbers(10.0,10.0);
    double result = max->operate();

    ROS_INFO("Max: %.2f", result);
  }
  catch(pluginlib::PluginlibException& ex)
  {
    ROS_ERROR("The plugin failed to load for some reason. Error: %s", ex.what());
  }

  return 0;
}

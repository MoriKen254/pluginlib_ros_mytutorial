#include <boost/shared_ptr.hpp>

#include <pluginlib/class_loader.h>
#include "pluginlib_arrayutil_base/arrayutil_base.h"

#include <gtest/gtest.h>

// TEST CASES
TEST(PluginlibArrayutilSubTest, testSum)
{
  pluginlib::ClassLoader<arrayutil_base::ArrayUtil> arrayutil_loader("pluginlib_arrayutil_sub", "arrayutil_base::ArrayUtil");
  boost::shared_ptr<arrayutil_base::ArrayUtil> sum = arrayutil_loader.createInstance("pluginlib_arrayutil_sub/Sum");
  //add->get_numbers(10.0,10.0);
  double result = sum->operate();

  EXPECT_EQ(result, 5.30);
}

TEST(PluginlibArrayutilSubTest, testAve)
{
  pluginlib::ClassLoader<arrayutil_base::ArrayUtil> arrayutil_loader("pluginlib_arrayutil_sub", "arrayutil_base::ArrayUtil");
  boost::shared_ptr<arrayutil_base::ArrayUtil> ave = arrayutil_loader.createInstance("pluginlib_arrayutil_sub/Ave");
  //add->get_numbers(10.0,10.0);
  double result = ave->operate();

  EXPECT_EQ(result, 2.65);
}

TEST(PluginlibArrayutilSubTest, testMin)
{
  pluginlib::ClassLoader<arrayutil_base::ArrayUtil> arrayutil_loader("pluginlib_arrayutil_sub", "arrayutil_base::ArrayUtil");
  boost::shared_ptr<arrayutil_base::ArrayUtil> min = arrayutil_loader.createInstance("pluginlib_arrayutil_sub/Min");
  //add->get_numbers(10.0,10.0);
  double result = min->operate();

  EXPECT_EQ(result, 1.00);
}

TEST(PluginlibArrayutilSubTest, testMax)
{
  pluginlib::ClassLoader<arrayutil_base::ArrayUtil> arrayutil_loader("pluginlib_arrayutil_sub", "arrayutil_base::ArrayUtil");
  boost::shared_ptr<arrayutil_base::ArrayUtil> max = arrayutil_loader.createInstance("pluginlib_arrayutil_sub/Max");
  //add->get_numbers(10.0,10.0);
  double result = max->operate();

  EXPECT_EQ(result, 4.30);
}

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "pluginlib_arrayutil_sub_test");

  ros::AsyncSpinner spinner(1);
  spinner.start();
  int ret = RUN_ALL_TESTS();
  spinner.stop();
  ros::shutdown();

  return ret;
}

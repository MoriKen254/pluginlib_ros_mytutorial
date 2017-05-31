#include "pluginlib_arrayutil_base/arrayutil_base.h"

namespace arrayutil_base 
{
    void ArrayUtil::loadArray(ros::NodeHandle &nh)
    {
      if (array_.size() > 0)
        array_.clear();
    }
};

#include "pluginlib_arrayutil_base/arrayutil_base.h"

namespace arrayutil_base 
{
    void ArrayUtil::setArray(std::vector<int> array)
    {
      if (array_.size() > 0)
        array_.clear();
    }
};

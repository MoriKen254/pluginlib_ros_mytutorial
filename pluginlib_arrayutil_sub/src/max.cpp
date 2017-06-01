#include <pluginlib/class_list_macros.h>
#include <pluginlib_arrayutil_sub/max.h>

namespace arrayutil_plugins
{
  Max::Max(){}
  void Max::loadArray()
  {
    // try{
    //   number1_ = number1;
    //   number2_ = number2;
    // }
    // catch(int e)
    // {
    //   std::cerr<<"Exception while inputting numbers"<<std::endl;
    // }
  }	

  double Max::operate()
  {
    array_.push_back(1.0);
    array_.push_back(4.3);

    if (array_.size() <= 0)
    {
      std::cerr << "array is empty when operation is attempted" << std::endl;
      return -1;
    }

    double max = 0;
    for (std::vector<double>::iterator it = array_.begin() ; it != array_.end(); ++it)
    {
      if (it == array_.begin())
        max = *it;
      
      if (*it > max)
        max = *it;
    } 

    return(max);
  }
}

PLUGINLIB_EXPORT_CLASS(arrayutil_plugins::Max, arrayutil_base::ArrayUtil);

#include <pluginlib/class_list_macros.h>
#include <pluginlib_arrayutil_sub/min.h>

namespace arrayutil_plugins
{
  Min::Min(){}
  void Min::loadArray()
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

  double Min::operate()
  {
    array_.push_back(1.0);
    array_.push_back(4.3);

    if (array_.size() <= 0)
    {
      std::cerr << "array is empty when operation is attempted" << std::endl;
      return -1;
    }

    double min = 10e9;
    for (std::vector<double>::iterator it = array_.begin() ; it != array_.end(); ++it)
    {
      if (it == array_.begin())
        min = *it;
      
      if (*it < min)
        min = *it;
    } 

    return(min);
  }
}

PLUGINLIB_EXPORT_CLASS(arrayutil_plugins::Min, arrayutil_base::ArrayUtil);

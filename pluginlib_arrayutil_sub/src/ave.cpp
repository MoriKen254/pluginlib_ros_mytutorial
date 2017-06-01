#include <pluginlib/class_list_macros.h>
#include <pluginlib_arrayutil_sub/ave.h>

namespace arrayutil_plugins
{
  Ave::Ave(){}
  void Ave::loadArray()
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

  double Ave::operate()
  {
    array_.push_back(1.0);
    array_.push_back(4.3);

    if (array_.size() <= 0)
    {
      std::cerr << "array is empty when operation is attempted" << std::endl;
      return -1;
    }

    double sum = 0;
    for (std::vector<double>::iterator it = array_.begin() ; it != array_.end(); ++it)
    {
      sum += *it;
    } 
    double ave = sum / array_.size();

    return(ave);
  }
}

PLUGINLIB_EXPORT_CLASS(arrayutil_plugins::Ave, arrayutil_base::ArrayUtil);

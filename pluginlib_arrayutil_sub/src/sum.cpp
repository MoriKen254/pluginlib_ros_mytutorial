#include <pluginlib_arrayutil_sub/sum.h>

namespace arrayutil_plugins 
{
  Sum::Sum(){}
  void Sum::loadArray()
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

  double Sum::operate()
  {
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

    return(sum);
  }
}

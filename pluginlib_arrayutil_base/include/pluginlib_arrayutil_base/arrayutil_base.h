#include <ros/ros.h>

namespace arrayutil_base 
{
  class ArrayUtil
  {
    public:
      void loadArray(ros::NodeHandle &nh);
      virtual double operate() = 0;
      virtual ~ArrayUtil(){}

    protected:
      ArrayUtil(){}

    //private:
      std::vector<double> array_;
  };
};

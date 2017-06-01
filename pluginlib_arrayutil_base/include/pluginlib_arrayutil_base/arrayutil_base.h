#include <vector>

namespace arrayutil_base 
{
  class ArrayUtil
  {
    public:
      void setArray(std::vector<int> array);
      virtual double operate() = 0;
      virtual ~ArrayUtil(){}

    protected:
      ArrayUtil(){}

    //private:
      std::vector<double> array_;
  };
};

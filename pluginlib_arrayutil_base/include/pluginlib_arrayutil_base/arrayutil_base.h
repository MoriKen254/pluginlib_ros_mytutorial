namespace array_util_base 
{
  class ArrayUtil
  {
    public:
      void load_array()
      {
        if (array.size() > 0)
          array.clear();
      }
      virtual double operate() = 0;
      virtual ~ArrayUtil(){}

    protected:
      ArrayUtil(){}

    private:
      std::vector<double> array;
  };
};

namespace array_util_base 
{
  class array_util
  {
    public:
      void load_array()
      {
        if (array.size() > 0)
          array.clear();
      }
      virtual double operate() = 0;
      virtual ~array_util(){}

    protected:
      array_util(){}

    private:
      std::vector<double> array;
  };
};

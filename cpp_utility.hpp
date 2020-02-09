// https://stackoverflow.com/questions/57151983/counting-elements-greater-than-a-number-in-vector
// Example : std::count_if(my_collection.cbegin(), my_collection.cend(), my_greater_equal{8});
struct my_greater_equal
{
   explicit my_greater_equal(int _threshold) : threshold(_threshold){}
   bool operator()(int next_val) const
   {
      return next_val >= threshold;
   }
   int threshold;
};
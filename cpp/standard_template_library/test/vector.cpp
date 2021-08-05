#include<iostream>
#include<vector>

namespace test 
{
void test_vector()
{
  using  std::cout;
  using  std::vector;
  using  std::endl;

  cout<< "test_vector......"<<endl;


  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2); 
  vec.push_back(3); 
  vec.push_back(4); 
  vec.push_back(5); 
  
  for (auto i = vec.begin(); i != vec.end(); ++i) {
    cout<< *i <<endl;
  }

  cout<< "vec.size()=" << vec.size() <<endl;
  cout<< "vec.front()=" << vec.front() <<endl;
  cout<< "vec.back()=" << vec.back() <<endl;
  cout<< "vec.data()=" <<vec.data() <<endl;
  cout<< "vec.capacity()="<<vec.capacity() <<endl;
} 
}


int main()
{
  test::test_vector();
  return 0;
}

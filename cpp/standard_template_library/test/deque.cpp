#include<iostream>
#include<deque>

namespace test 
{
void test_deque()
{
  using  std::cout;
  using  std::deque;
  using  std::endl;

  cout<< "test_deque......"<<endl;


  deque<int> c;
  c.push_back(1);
  c.push_back(2); 
  c.push_back(3); 
  c.push_back(4); 
  c.push_back(5); 
  c.push_front(2); 
  c.push_front(3); 
  c.push_front(4); 
  
  for (auto i = c.begin(); i != c.end(); ++i) {
    cout<< *i <<endl;
  }

  cout<< "c.size()=" << c.size() <<endl;
  cout<< "c.max_size()=" << c.max_size() <<endl;
  cout<< "c.front()=" << c.front() <<endl;
  cout<< "c.back()=" << c.back() <<endl;
//  cout<< "c.data()=" <<c.data() <<endl; // no data method
 //  cout<< "c.capacity()="<<c.capacity() <<endl; // no capacity method
} 
}


int main()
{
  test::test_deque();
  return 0;
}

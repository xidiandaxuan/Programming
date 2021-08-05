#include<iostream>
#include<queue>

namespace test 
{
void test_queue()
{
  using  std::cout;
  using  std::queue;
  using  std::endl;

  cout<< "test_queue......"<<endl;


  queue<int> c;
  c.push(1);
  c.push(2); 
  c.push(3); 
  c.push(4); 
  c.push(5); 
  

  cout<< "c.size()=" << c.size() <<endl;
  cout<< "c.front()=" << c.front() <<endl;
  cout<< "c.back()=" << c.back() <<endl;
//  cout<< "c.data()=" <<c.data() <<endl; // no data method
 //  cout<< "c.capacity()="<<c.capacity() <<endl; // no capacity method

  c.pop();
  cout<< "c.size()=" << c.size() <<endl;
  cout<< "c.front()=" << c.front() <<endl;
  cout<< "c.back()=" << c.back() <<endl;
} 
}


int main()
{
  test::test_queue();
  return 0;
}

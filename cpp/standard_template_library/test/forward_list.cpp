#include<iostream>
#include<forward_list>

namespace test 
{
void test_forward_list()
{
  using  std::cout;
  using  std::forward_list;
  using  std::endl;

  cout<< "test_forward_list......"<<endl;


  forward_list<int> c;
  c.push_front(1);
  c.push_front(2); 
  c.push_front(3); 
  c.push_front(4); 
  c.push_front(5); 
  
  for (auto i = c.begin(); i != c.end(); ++i) {
    cout<< *i <<endl;
  }

  cout<< "c.max_size()=" << c.max_size() <<endl;
  cout<< "c.front()=" << c.front() <<endl;
} 
}


int main()
{
  test::test_forward_list();
  return 0;
}

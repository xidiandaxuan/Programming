#include<iostream>
#include<stack>

namespace test 
{
void test_stack()
{
  using  std::cout;
  using  std::stack;
  using  std::endl;

  cout<< "test_stack......"<<endl;


  stack<int> c;
  c.push(1);
  c.push(2); 
  c.push(3); 
  c.push(4); 
  c.push(5); 
  cout<< "c.size()=" << c.size() <<endl;
  cout<< "c.top()=" << c.top()<<endl;

  c.pop();
  cout<< "c.size()=" << c.size() <<endl;
  cout<< "c.top()=" << c.top()<<endl;

  while ( c.size()) {
    c.pop();
    cout<< "c.size()=" << c.size() <<endl;
    if ( c.size()) { 
      cout<< "c.top()=" << c.top()<<endl;
    }
  }
}
}


int main()
{
  test::test_stack();
  return 0;
}

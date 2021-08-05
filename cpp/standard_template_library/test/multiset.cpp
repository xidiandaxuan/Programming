#include<iostream>
#include<set>

namespace test 
{
  using std::cout;
  using std::endl;
  using std::multiset;

  void test_multiset()
  {
    multiset<int> c;
    c.insert(1);
    c.insert(2);
    c.insert(3);
    c.insert(4);

    cout<<"multiset.size()=" << c.size() <<endl;
    cout<<"multiset.max_size()=" << c.max_size() <<endl;
    auto iPtem = c.find(2);
    cout<< "c.find(2)=" << (*iPtem) <<endl;
  }
} 

int main() 
{
  test::test_multiset();
  return 0;
}

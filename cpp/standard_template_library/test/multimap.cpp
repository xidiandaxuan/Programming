#include<iostream>
#include<map>
#include<string>

namespace test 
{
  using std::cout;
  using std::endl;
  using std::multimap;
  using std::string;
  using std::pair;

  void test_multimap()
  {
    multimap<int, string> c;
    c.insert(pair<int,string> (1,"one"));
    c.insert(pair<int,string> (2,"two"));
    c.insert(pair<int,string> (3,"three"));

    cout<<"multimap.size()=" << c.size() <<endl;
    cout<<"multimap.max_size()=" << c.max_size() <<endl;
    auto iPtem = c.find(2);
    cout<< "c.find(2)=" << (*iPtem).second <<endl;
  }
} 

int main() 
{
  test::test_multimap();
  return 0;
}

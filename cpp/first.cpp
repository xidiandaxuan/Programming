#include<iostream>
#include<vector>
#include<limits>

using std::endl;
using std::cout;
using std::vector;
using std::numeric_limits;

int main()
{
  vector<int> vec={1, 3, 3 ,4 ,4,5};
  for (auto i:vec) {
    cout<< i <<endl;
  }
  
  cout <<  "Min unsigned short int " <<
         numeric_limits<unsigned short int>::min() <<endl;
  cout <<  "Max unsigned short int " <<
         numeric_limits<unsigned short int>::max() <<endl;
  cout <<  "Max int " <<
         numeric_limits<int>::max() <<endl;
  cout <<  "Min int " <<
         numeric_limits<int>::min() <<endl;
  return 0;
} 

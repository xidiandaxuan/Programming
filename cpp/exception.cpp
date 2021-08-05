#include<iostream>
using std::cout;
using std::endl;


int main()
{
  try {
    int a = 4;
    int b = 0;
    if ( b == 0 ) {
      throw "Division by Zero Error";
    }else {
      b = a / b;
    } 
   }
   catch (const char * exp) { 
     cout<<"Error: " << exp <<endl;
   }
  return 0;
}

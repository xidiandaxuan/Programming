#include<iostream>

template<typename T> 
void Print(T value) 
{
 std::cout<< "template"<<value << std::endl;
}

void Print(int value) 
{
 std::cout<< "int"<<value << std::endl;
}

void Print(float value) 
{
 std::cout<< "float"<<value << std::endl;
}


template<int N>
class Array 
{
private:
   int array[N];
public:
   int getSize() const;
};

template<int N>
int Array<N>::getSize() const 
{
  //return sizeof(array)/sizeof(array[0]);
  return N;
}

template<class T>
class Bucky
{
private:
   T first, second;
public:
   Bucky(T a, T b) {
    first = a;
    second = b;
   }
   T bigger();
};

template <typename T>
T Bucky<T>::bigger()
{
  return (first>second?first:second);
}

template<class T>
class Spunky
{
public:
  Spunky(T x) { 
     std::cout<<x <<"is not a character!\n";
  }
};


template<>
class Spunky<char> {
  public:
    Spunky(char x) {
     std::cout<< x << " is indeed a character!\n";
    }
};

int main()
{
 Print(5);
 Print<int>(6);
 Print<float>(8.8);
 Print(6.6f);

 Array<8> arr;
 std::cout<<"array size: "<<arr.getSize()<<std::endl;

 Bucky<int> bo(23,12);
 std::cout<<bo.bigger()<<std::endl;

  Spunky<int> obj1(8);
  Spunky<double> obj2(8.8);
  Spunky<char> obj3('b');
   
  
 return 0;
}

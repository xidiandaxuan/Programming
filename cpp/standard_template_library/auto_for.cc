#include<iostream>
#include<vector>

int main() 
{
    for  (int i: { 1, 3, 5, 7, 9})
    {
        std::cout<< i << std::endl;
    }

    std::vector<double> vec{2.1, 1.2, 6.6};
    for (auto elem : vec ) 
    {
        std::cout<< elem <<std::endl;
    }

    for ( auto& elem : vec) 
    {
        std::cout<< elem  * 2 <<std::endl;
    } 
    return 0;
}

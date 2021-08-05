#include<vector>
#include <algorithm>
#include<functional>
#include<iostream>

using namespace std;

int main() 
{
    int ia[6] = {100, 223, 3, 4, 5, 60};
    vector<int, allocator<int> > vi(ia,ia+6);
    for (vector<int>::iterator ite = vi.begin();
        ite != vi.end(); ++ite) {
        cout<< *ite <<" ";
    }
    cout<<endl;
    for ( auto i = vi.begin(); i != vi.end(); ++i) {
        cout<< *i <<" ";
    }
    cout<<"\nthe num of more than 40 is:";
    cout<< count_if(vi.begin(),vi.end(),
             not1(bind2nd(less<int>(),40 ) ) );
    cout<<endl;
    return 0;
}

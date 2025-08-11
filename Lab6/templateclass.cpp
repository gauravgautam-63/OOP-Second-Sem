#include <iostream>
using namespace std;
template <class T>
class mypair
{
private:
    t a,b;
public:
    mypair(T first, T second) 
    {
        a= first;
        b=second;
    }
    T getmax()
    {
        return a>b?a:b;
    }
};
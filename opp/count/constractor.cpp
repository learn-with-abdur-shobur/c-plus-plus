#include <iostream>
using namespace std;

class Addition{
    public:
    int c;
    Addition(int a,int b)
    {
        c= a+b;
        cout<<"the result is :"<<c;
    };
};

int main ()
{
    int a,b;
    cin >>a>>b;
    Addition obj(  a,   b);
};
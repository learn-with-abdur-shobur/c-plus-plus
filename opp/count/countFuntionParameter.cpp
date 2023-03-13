#include <iostream>
using namespace std;

class Additon{
    public:
    int c;
    void result(int a ,int b)
    {
        c=a+b;
        cout<<"Result is "<<c;
    }
};
int main( )
{
    Additon obj;
    int a,b;
    cin>>a>>b;
    obj.result(a,b);
 
     return 0;
}

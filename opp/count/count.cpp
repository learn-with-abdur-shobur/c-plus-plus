#include <iostream>
using namespace std;
class Addition{
    public: 
    int a,b,c;
    void result(){
        cin>>a>>b;
        c=a+b;
        cout<<c;
    }
};
main()
{
    Addition obj;
    obj.result();
}
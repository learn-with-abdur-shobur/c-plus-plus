// c++ is object orient program. Class is blueprint for create object.
// Class help to create full structure for program 
// Create reuseable object for using class  

// inside Class 
#include <iostream>
using namespace std;
class myClass{  
    public   :
    void myMethod(){
        cout<<"Run Inside\n";

    };
};

// outside class 
class NewClass{
    public : 
    void newFunc();
};

void NewClass::newFunc(){
    cout<<"Run outside Func";
};

int main(){
    // inside class 
     myClass myNewMethod;
     myNewMethod.myMethod();

    // outside class 
     NewClass NewInheritClass;
     NewInheritClass.newFunc();

     return 0;
}

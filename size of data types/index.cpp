#include <iostream>
using namespace std;
int main (){

    // size of integer 
    int a;
    a=10;
    cout<< "Size of int: "<<sizeof(a)<<endl;
    // Size of int: 4

    // size of float 
    float b;
    cout<< "Size of float: "<<sizeof(b)<<endl;
    // Size of float: 4

    // size of char 
    char c;
    cout<< "Size of a char: "<<sizeof(c)<<endl;
    // Size of a char: 1

    // size of bool 
    bool d;
    cout<< "Size of a bool: "<<sizeof(d)<<endl;
    // Size of a bool: 1


    return 0;
}
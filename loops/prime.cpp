#include<iostream>
using namespace std;

int  main(){
    int n,i;
    cin >>n;
    for (i=2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"not prime";
            break;
        }
        
    }
    if (i==n)
    {
        cout<<"prime";
    }
    
     return 0;
}
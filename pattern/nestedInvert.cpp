#include<iostream>
using namespace std;

// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

int  main(){
    int row;
    cin>>row ;
 for (int i = 1; i <= row; i++)
 {
    for (int j = 1; j <= row+ 1-i ; j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    
 }
 
    
     return 0;
}
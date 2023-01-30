#include<iostream>
using namespace std;

//         1 
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5


int  main(){
    int row ;
    cin>>row ;

    for (int i = 1; i <= row; i++)
    {

        int j;
        for ( j = 1; j <= row-i; j++)
        {
            cout<<"  ";
        }

        int k = i;
        for ( ; j <=row; j++)
        {
          cout<<k--<<" ";
        }
        
        k=2;
        for ( ; j <= row+i-1; j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
        

        
    } 
     return 0;
}
#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!\n";
}
void defaultFunc(string county="bangladesh"){
  cout << county <<"\n";
}

int main(){
  defaultFunc("India");
  defaultFunc();
    myFunction();
    return 0;
}
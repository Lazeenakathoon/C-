#include <iostream>
using namespace std;

void printNums(int n){//recusrive function
    if(n == 1){
        cout << "1\n";
        return;
    }
 
 cout << n << " ";//n to 1
 printNums(n - 1);
}

int main(){
    printNums(100);
    return 0;   
}
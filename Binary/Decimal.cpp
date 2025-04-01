#include <iostream>
using namespace std;

int decToDecimal(int binNum){
    int ans = 0; 
    int pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        ans += rem * pow;
        
        binNum /= 10;
        pow *= 2;
    }
    return ans; //decimal form
}

int main() {
    cout << decToDecimal(100101) << endl; //5
    return 0;
}
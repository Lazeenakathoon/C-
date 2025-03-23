#include<iostream>
using namespace std;

//Sum of 2 number
double sum(double a, double b){
    double s = a + b;
    return s;
}

//min of 2 nums
int minOfTwo(int a, int b){//paremeters
    if(a < b){
        return a;
    } else {
        return b;
    }
}

int factorialN(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }

    return fact;
}


int main() {
    cout << factorialN(4) <<  endl;
    cout << factorialN(7) << endl;
    return 0;
}
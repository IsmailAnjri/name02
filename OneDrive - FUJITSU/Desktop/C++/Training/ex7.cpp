#include <iostream>

using namespace std;

unsigned long long factorial_2_r(int n) {
    if (n==0 || n==1) {
        return 1;
    } else {
        return n*factorial_2_r(n-2);
    }
}

unsigned long long factorial_2_i(int n) {
    unsigned long long result = 1;
    for (int i=n; i>=2;i-=2) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    unsigned long long result_r = factorial_2_r(n);
    unsigned long long result_i = factorial_2_i(n);
    cout<<"Recursive result: "<<result_r<<endl;
    cout<<"Iterative result: "<< result_i<<endl;

    return 0;
}


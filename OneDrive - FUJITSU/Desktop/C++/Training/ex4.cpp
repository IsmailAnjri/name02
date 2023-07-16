#include<iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num=0;

    cout<<"Enter the integer (non-negative): ";
    cin>>num;

    if(num<0){
        cout<<"Error. The number is negative"<<endl;
        return 0;
    }
    if(num == 0){
        cout<<"The factorial of "<<num<<" is: 1"<<endl;
    }
    else{
        cout<<"The factorial of "<<num<<" is: "<<factorial(num)<<endl;
    }



    return 0;
}

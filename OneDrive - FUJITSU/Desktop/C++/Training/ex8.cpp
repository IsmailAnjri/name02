#include<iostream>

using namespace std;

bool checker(int *arr, int size){
    for(int i=0; i<size; i++)
    {
        if (arr[i]>arr[i+1])
            return false;
    }
    return true;
}

int main()
{
    int arr[] = {1,-5,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<checker(arr, size); /// 1: true | 0: false

    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int avg = sum/n;
    cout<<sum<<"\n";
    cout<<avg<<"\n";
    return 0;

}
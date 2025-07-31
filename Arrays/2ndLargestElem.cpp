#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    int first = INT_MIN, second = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        if(first < arr[i]){
            second = first;
            first = arr[i];
        }else if (arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    cout<<second;
}
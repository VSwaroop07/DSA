#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res[n];
    for (int i = 0; i < n; i++)
    {
        res[i] = arr[n - 1 - i];
    }
    for (auto i : res)
    {
        cout << i;
    }
    return 0;
}
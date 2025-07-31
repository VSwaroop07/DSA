#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ar[] = {2, 3, 5, 1, 5, 7, 6, 8, 9, 4, 3};
    int n = sizeof(ar) / sizeof(ar[0]);

    int index = 0;

    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;

        for (int j = 0; j < index; j++)
        {
            if (ar[i] == ar[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate)
        {
            ar[index] = ar[i];
            index++;
        }
    }

    cout << "Array : " << "\n";
    for (int i = 0; i < index; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
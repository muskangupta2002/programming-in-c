#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int i = 0;
    while (i < n)
    {
        if (arr[i] == arr[i + 1])
        {
            for (int j = i+1; j < n-1; j++)
            {
                int t =  arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
            
           
            i = 0;
            n--;
        }
        else{
            i++;
        }
    }
    cout << "\n\nNow Array is : ";
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
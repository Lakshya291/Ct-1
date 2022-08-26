// Lakshya Gupta
// 2010990417

#include <iostream>
using namespace std;

void SubArrayWithSum0(int nums[], int n)
{
    // subarrays starting from I
    cout << "Subarrays with zero-sum are " << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        // subarrays ending at J
        for (int j = i; j < n; j++)
        {
            // sum of elements
            sum += nums[j];

            // with zero-sum
            if (sum == 0)
            {
                // Printing out the sub arrays with zero sum
                cout << "{";
                cout << nums[i] << " ";
                for (int k = i + 1; k < j + 1; k++)
                    cout << ", " << nums[k];
                cout << "}";
                cout << endl;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    SubArrayWithSum0(arr, n);
}
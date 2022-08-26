// Lakshya Gupta
// 2010990417
// Set No. 05

#include <bits/stdc++.h>
using namespace std;

void LengthOfLongestSubarray(int arr[], int n, int k)
{

    unordered_map<int, int> UnMap;
    int sum = 0, max = 0;

    for (int i = 0; i < n; i++)
    {

        // Sum of elements
        sum += arr[i];

        // subarray starting from I
        if (sum == k)
            max = i + 1;

        // Entering sum value if it is not present in the UnMap
        if (UnMap.find(sum) == UnMap.end())
            UnMap[sum] = i;

        // check if 'sum-k' is present in 'UnMap'
        // or not
        if (UnMap.find(sum - k) != UnMap.end())
        {

            // update maxLength
            if (max < (i - UnMap[sum - k]))
                max = i - UnMap[sum - k];
        }
    }

    cout << "The length of longest subarray is " << max;
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;
    LengthOfLongestSubarray(arr, n, k);
    return 0;
}
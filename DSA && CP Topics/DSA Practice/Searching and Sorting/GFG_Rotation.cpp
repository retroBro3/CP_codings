#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKRotation(int arr[], int n)
    {
        int start = 0, end = n - 1;

        while (start <= end)
        {
            if (arr[start] <= arr[end])
                return start;

            int mid = start + (end - start) / 2;
            int prev = (mid + n - 1) % n, next = (mid + 1) % n;

            if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
                // if(arr[mid] <= arr[prev])
                return mid;
            /// search in the unsorted portion
            if (arr[mid] >= arr[start])
                start = mid + 1;
            else if (arr[mid] <= arr[end])
                end = mid - 1;
        }

        return 0;
    }
};

int main()
{

    return 0;
}
// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;


// Its a  modification of Kadane's Algo
int smallestSumSubarr(int arr[], int n)
{
    // to store the minimum value that is ending
    // up to the current index
    int min_ending_here = INT_MAX;

    // to store the minimum value encountered so far
    int min_so_far = INT_MAX;

    // traverse the array elements
    for (int i = 0; i < n; i++)
    {
        // if min_ending_here > 0, then it could not possibly
        // contribute to the minimum sum further
        if (min_ending_here > 0)
            min_ending_here = arr[i];

        // else add the value arr[i] to min_ending_here
        else
            min_ending_here += arr[i];

        // update min_so_far
        min_so_far = min(min_so_far, min_ending_here);
    }

    // required smallest sum contiguous subarray value
    return min_so_far;
}
// C++ program to find a pair with the given difference
// Given an unsorted array and a number n, find if there exists a pair of elements in the array whose difference is n. 
// Examples: 

// Input: arr[] = {5, 20, 3, 2, 50, 80}, n = 78
// Output: Pair Found: (2, 80)

// Input: arr[] = {90, 70, 20, 80, 50}, n = 45
// Output: No Such Pair



#include <bits/stdc++.h>
using namespace std;
bool find(int arr[], int size, int n)
{
    int l,r,sub;

    sort(arr,arr+size);


    l =0;
    r=1;

    while(l<=r && r<size)
    {
        sub = arr[r] - arr[l];
        if(sub == n && l!=r)
        if(sub == n && l!=r)
        return true;

        else if(sub>n)
        l++;

        else
        r++;
    }

    return false;

}
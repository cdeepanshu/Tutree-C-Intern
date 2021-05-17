/*

Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. 
Find these repeating numbers in O(n) and using only constant memory space.

Input : n = 7 and array[] = {1, 2, 3, 6, 3, 6, 1} 
Output: 1, 3, 6 
Explanation: The numbers 1 , 3 and 6 appear more than once in the array. 

Input : n = 5 and array[] = {1, 2, 3, 4 ,3} 
Output: 3 
Explanation: The number 3 appears more than once in the array.


*/

#include<bits/stdc++.h>

using namespace std;

void duplicates(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        arr[arr[i] % n] = arr[arr[i] % n] + n;
    }
    
    for(int i = 0; i<n; i++)
    {
        if(arr[i] >= n*2)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main() 
{ 
    int n;
    
    cin>>n;
    
    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    duplicates(arr, n);
    
    
	return 0;
} 




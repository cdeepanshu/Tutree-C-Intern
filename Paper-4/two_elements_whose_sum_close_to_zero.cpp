/*

Two elements whose sum is closest to zero.

An Array of integers is given, both +ve and -ve. 
You need to find the two elements such that their sum is closest to zero. 
For the below array, the program should print -80 and 85.



*/


#include<bits/stdc++.h>

using namespace std;

bool compare(int x, int y)
{
    return abs(x) < abs(y);
}

void close_to_zero(int arr[], int n)
{
    sort(arr, arr + n, compare);    //sort the array by absolute value

    int min = INT_MAX, first, second;
    
    for(int i = 0; i<n-1; i++)
    {
        if(abs(arr[i] + arr[i+1]) <= min)      //check how close the absolute value to zero
        {
            min = abs(arr[i] + arr[i+1]);
            first = i;
            second = i + 1;
        }
    }
    
    cout<<arr[first]<<" "<<arr[second];
    
    
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
    
    close_to_zero(arr, n);
    
    
	return 0;
} 




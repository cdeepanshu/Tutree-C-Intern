/*

Write a program to print all the LEADERS in the array. 
An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. 
For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.


*/

#include <bits/stdc++.h>

using namespace std;


void leaders(int arr[], int n)
{
    vector<int>v;
    
	int curr_ldr = arr[n - 1];

    //rightmost element is always leader 
    
    v.push_back(curr_ldr);

    //traverse from right to left
    
	for(int i = n - 2; i >= 0; i--)
	{
		if(curr_ldr < arr[i])
		{
			curr_ldr = arr[i];

			v.push_back(curr_ldr);
		}
	}
	
	for(int i = v.size() - 1; i>=0; i--)
	{
	    cout<<v[i]<<" ";
	}
}



int main() {
	
    int n;      //size of array
    
    cin>>n;
    
    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    leaders(arr, n);
    
}

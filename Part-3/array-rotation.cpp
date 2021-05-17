/*
Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements.
Rotation of the above array by 2 will make array

Input: arr[] = {1,2,3,4,5,6}, n = 6, d = 2
Output: arr[] = {3,4,5,6,1,2}


*/


#include<bits/stdc++.h>

using namespace std;

void reverse(int arr[], int low, int high)
{
    while(low < high)
    {
        swap(arr[low], arr[high]);
        
        low++;
        high--;
    }
}


void rotate(int arr[], int n, int d)
{
    reverse(arr, 0, d-1);     //reverse first d elements
    
    reverse(arr, d, n-1);     //reverse remaining n-d elements 
    
    reverse(arr, 0, n-1);     //reverse n elements
}


int main() 
{ 
    int n,d;
    
    cin>>n>>d;
    
    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    
   cout<<"Before Rotation"<<endl;

   for(int i = 0; i < n; i++)
   {
   		cout<<arr[i]<<" ";
   }
   
    cout<<endl;
    
    rotate(arr, n, d);
    
    cout<<"After Rotation"<<endl;

   for(int i = 0; i < n; i++)
   {
   		cout<<arr[i]<<" ";
   }
    
    
	return 0;
} 




/*

Q1. Union and Intersection of two sorted arrays.

Given two sorted arrays, find their union and intersection.

Input : arr1[] = {1, 3, 4, 5, 7} arr2[] = {2, 3, 5, 6} 
Output :
Union : {1, 2, 3, 4, 5, 6, 7} 
Intersection : {3, 5} 

Input : arr1[] = {2, 5, 6} arr2[] = {4, 6, 8, 10} 
Output : 
Union : {2, 4, 5, 6, 8, 10} 
Intersection : {6}


*/


#include<bits/stdc++.h>

using namespace std;

void intersection(int a[], int b[], int n, int m)
{
     int i = 0, j = 0;
    
    while (i < n && j < m) {
        if (a[i] < b[j])
            i++;
 
        else if (b[j] < a[i])
            j++;
 
        else {
            cout << b[j++] << " ";
            i++;
        }
    }
}

int main() 
{ 
    
    int n, m;
    
    cout<<"Enter size of first array:";
    cin>>n;
    
    int a[n];
    
    cout<<"Enter elements of first array:";
    
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    
    cout<<"Enter size of second array:";
    cin>>m;
    
    int b[m];
    
    cout<<"Enter elements of second array:";
    
    for(int i = 0; i<m; i++)
    {
        cin>>b[i];
    }
    
    cout<<"Union:"<<endl;
    
    int i = 0;
    int j = 0;
    
    while(i < n && j < m) 
    {
        if(a[i] < b[j])
        {
            cout<<a[i++];
        }
        
        else if(b[j] < a[i])
        {
            cout<<b[j++] << " ";
        }
 
        else {
            cout << b[j++] << " ";
            i++;
        }
    }
 
    while (i < n)
        cout<<a[i++] << " ";
 
    while (j < m)
        cout<<b[j++] << " ";

    cout<<"Intersection:"<<endl;
    intersection(a, b, n, m);
    
	return 0;
} 




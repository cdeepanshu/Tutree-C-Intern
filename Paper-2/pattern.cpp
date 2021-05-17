/*

 Program to print following pattern:

Input:- 5

Output:- 

*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *


*/

#include<bits/stdc++.h>

using namespace std;

int main() 
{ 
    int n;      //size of array
    
    cin>>n;
    
    for(int r = 1; r<=n; r++)
    {
        for(int c = 1; c<=2*n; c++)
        {
            if(c<=r || c>(2*n - r))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    for(int r = n; r>=1; r--)
    {
        for(int c = 2*n; c>=1; c--)
        {
            if(c<=r || c>(2*n - r))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    
    
	return 0;
} 

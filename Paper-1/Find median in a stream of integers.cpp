/*

Find median in a stream of integers (running integers)

Explanation-
Given that integers are read from a data stream. Find median of elements read so for in efficient way. 
For simplicity assume there are no duplicates. For example, let us consider the stream 5, 15, 1, 3 …

After reading 1st element of stream - 5 -> median - 5
After reading 2nd element of stream - 5, 15 -> median - 10
After reading 3rd element of stream - 5, 15, 1 -> median - 5
After reading 4th element of stream - 5, 15, 1, 3 -> median - 4, so on...


*/


#include <bits/stdc++.h>

using namespace std;

void printMedians(int arr[],int n){
    
    priority_queue<int> s;       //max heap
    
    priority_queue<int, vector<int>,greater<int>> g;    //min heap
    
    s.push(arr[0]);         //push first element to max heap
    
    cout<<arr[0]<<" ";
    
    for(int i=1;i<n;i++){ 
        
        int x=arr[i];
        
        //if size of max heap is greater than min heap
        
        if(s.size()>g.size())
        {
            // if max heap top is greater than current element
            if(s.top()>x){     
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else 
            {
                g.push(x);
            }
            
            //even number of elements are there
            
            cout<<(s.top()+g.top())/2.0<<" ";   
        }
        else{
            if(x<=s.top())
            {
                s.push(x);
            }else{
                g.push(x);
                s.push(g.top());
                g.pop();
            }
            
            //odd number of elements
            
            cout<<s.top()<<" ";
        }
    }
}

int main()
{
	int n;      //size of array
    cin>>n;
    
    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    printMedians(arr,n);
	
	return 0;
}

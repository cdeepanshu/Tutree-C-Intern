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

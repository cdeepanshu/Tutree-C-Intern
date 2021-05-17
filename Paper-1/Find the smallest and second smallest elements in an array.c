/*


Find the smallest and second smallest elements in an array.

Explanation- Write an efficient C program to find smallest and second smallest element in an array

Example:

Input: arr[] = {12, 13, 1, 10, 34, 1}
Output: The smallest element is 1 and
second Smallest element is 10


*/


#include<stdio.h>
#include<limits.h>

void smallest_second_smallest(int arr[], int n)
{
    int first = INT_MAX, second = INT_MAX;    
    
    if(n<1)     //if there is no element in the array
    {
        printf("Invalid Input");
        return;
    }
    
    for(int i = 0; i<n; i++)
    {
        //if current element is smaller the first then update both first and second
        if(arr[i] < first)           
        {                           
            second = first;
            first = arr[i];
        }
        
        // if a[i] is between first and second then update second
        else if(arr[i] < second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    
    if(second == INT_MAX)
    {
        printf("The smallest element is %d \n" "There is no second smallest element", first );
    }
    
    else
    {
         printf("The smallest element is %d \n" "Second Smallest element is %d", first, second );
    }
    
}


int main() 
{ 
    int n;      //size of array
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    smallest_second_smallest(arr, n);
    
	return 0;
} 

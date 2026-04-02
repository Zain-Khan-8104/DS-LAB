#include<iostream>
using namespace std;

int interpolationsearch(int arr[],int size ,int x)
{
    
    int low =0;
    int high = size - 1;
    while(low<= high && x >= arr[low] && x<= arr[high])
    {
        if(low == high)
        {
            if(arr[low]== x)
            {
                return low;
            }else
            {
                return -1;
            }
        }
        int pos = low + ((x-arr[low]) * (high-low)) / (arr[high] - arr[low]);

        if(arr[pos]==x)
        {
            return pos;
        }
        if(arr[pos]<x)
        {
            low = pos+1;
        }else
        {
            high = pos-1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {19,20,24,29,59,100,191,541};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter X ";
    cin>>x;
    int result = interpolationsearch(arr,size,x);
    cout<<result;
    return 0;
}
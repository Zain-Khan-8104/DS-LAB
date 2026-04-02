

#include<iostream>
using namespace std;

void bubblesort(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=0;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void selectionsort(int arr[], int size)
{  
    for( int i=0;i<size;i++)
    {
        int index = i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[index])
            {
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

}
void insertionsort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int key = arr[i];
        int j = i -1 ;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= key;
    }
}


void shellSort(int myarr[], int n1) {
    for (int gap = n1 / 2; gap > 0; gap /= 2) {
        for (int j = gap; j < n1; j++) {
            int temp = myarr[j];
            int res = j;

            while (res >= gap && myarr[res - gap] > temp) {
                myarr[res] = myarr[res - gap];
                res -= gap;
            }

            myarr[res] = temp;
        }
    }
}

int main()
{
    int arr[5]={5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    // bubblesort(arr,size);
    // selectionsort(arr,size);
    // insertionsort(arr,size);
    shellSort(arr,size);

    for(int i=0;i<size;i++)
{
            cout<<arr[i];
    }
    return 0;

}
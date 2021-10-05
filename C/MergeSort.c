// C Program for Merge Sort
// Time Complexity -- O(nlogn)
#include<stdio.h>
void mergesort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void merge(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-(mid+1)+1;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[low+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=low;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=a[i];
        i++,k++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        j++,k++;
    }
 }
 int main()
 {
     int n;
     printf("Enter no. of elements in array:");
     scanf("%d",&n);
     int arr[n];
     printf("Enter Array Elements : ");
     for(int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("Array : ");
     for(int i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
     mergesort(arr,0,n-1);
     printf("\nSORTED ARRAY :");
     for(int i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
     return 0;
 }

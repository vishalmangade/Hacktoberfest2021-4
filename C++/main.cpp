#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b = temp;
}
int partition (int A[], int p, int r)
{
    int x = A[r]; // x is pivot
    int i = p - 1;

    for (int j = p; j <= r- 1; j++)
    {
        if (A[j] <= x)
        {
            i++;
            swap (&A[i], &A[j]);
        }
    }
    swap (&A[i + 1], &A[r]);
    return (i + 1);
}

void quickSort(int A[], int p, int r) // p i left and r is right
{
    if (p < r)
    {
        int q = partition(A, p,r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}
int main()
{
    // int a[] = {2,6,5,1,3,4};
    // int n = sizeof(a)/sizeof(a[0]);
    int n,a[100];
    cout<<"How Many Elements You Want To Add? \n";
    cin>>n;
    cout<<"enter elements \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quickSort(a,0,n-1);
    cout<<"After Sorted \n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}

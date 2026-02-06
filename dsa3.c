#include<stdio.h>
int getmax(int arr[],int n)
{
    int max =arr[0];
    intsmax = -1;
    for(int i=1;i<n;i++)
    {
        if (arr[i]>max)

        {
            smax=max;
            max=arr[i];
        }
        else if(arr[i]<max&&arr[i]>smax)
        {
            smax=arr[i];
        }
    }
    return smax;
}
int main()
{    int arr[]={3,4,6,9,2};
    int n=sizeof(arr)/sizeofarr(arr[0]);
     printf("%d",getsmax(arr,n));
}
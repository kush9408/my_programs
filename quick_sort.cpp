#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
int partition(int arr[],int p,int r)
{
int k=arr[r];
int i=p-1;
for(int j=p;j<=r-1;j++)
{
if(arr[j]<=k)
{
i++;
swap(&arr[i],&arr[j]);
}
}
swap(&arr[i+1],&arr[r]);
return(i+1);
}

void quicksort(int arr[],int p,int r)
{
if(p<r)
{
int q=partition(arr,p,r);
quicksort(arr,p,q-1);
quicksort(arr,q+1,r);
}
}
void printarray(int arr[],int size)
{
for(int i=0;i<size;i++){
cout<<" "<<arr[i];
}
}
int main()
{
int arr[]={2,3,8,1,4};
int n=5;
quicksort(arr,0,n-1);
cout<<"\n"<<"sorted array"<<endl;
printarray(arr,n);
return 0;
}

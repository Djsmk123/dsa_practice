#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;

    }
}
int main(){
    int a[]={1,4,23,42,3223,141};
    int  n=sizeof(a)/sizeof(a[0]);
    reverse(a,n);
   for(int i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   }

}
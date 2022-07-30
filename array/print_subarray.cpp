#include<iostream>
using namespace std;
void printSubArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}
int main(){
    int a[]={1,4,23,42,3223,141};
    int  n=sizeof(a)/sizeof(a[0]);
    printSubArray(a,n);
   
}
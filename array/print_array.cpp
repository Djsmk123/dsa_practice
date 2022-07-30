#include<iostream>
using namespace std;
void printAllPair(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        int x=arr[i];
        for(int j=i+1; j<n; j++)
        {
            int y=arr[j];
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        cout<<endl;

    }
}
int main(){
    int a[]={1,4,23,42,3223,141};
    int  n=sizeof(a)/sizeof(a[0]);
    printAllPair(a,n);
   
}
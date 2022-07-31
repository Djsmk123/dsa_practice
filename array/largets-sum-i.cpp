#include<iostream>
using namespace std;
//bruteForce Time Complexity O(N^3)
int subArraySum1(int arr[],int n)
{
     int largestSum=0;
    for(int i=0; i<n; i++)
    {
       
        for(int j=i; j<n; j++)
        {
            int subarraySum=0;
            for(int k=i; k<=j; k++)
            subarraySum+=arr[k];
            largestSum=max(largestSum,subarraySum);
        }
    }
        return largestSum;
}

//using prefix array O(N^2)

int subArraySum2(int arr[],int n)
{    int prefix[n]={0};
      prefix[0]=arr[0];
      for(int i=1; i<n; i++)
      {
        prefix[i]=prefix[i-1]+arr[i];
      }
     int largestSum=0;
    for(int i=0; i<n; i++)
    {
       
        for(int j=i; j<n; j++)
        {
            int subarraySum=i>0?prefix[j]-prefix[i-1]:prefix[j];
            largestSum=max(largestSum,subarraySum);
        }
    }
    return largestSum;
}

//using  Kadane's algorithm O(N)
int subArraySum3(int arr[],int n)
{      int cs=0;
        //maxSum
       int ms=0;
       for(int i=0; i<n; i++)
       {
         cs+=arr[i];
         if(cs<0)
         {
            cs=0;
         }
         ms=max(ms,cs);
       }
       return ms;
}
int main(){
    int a[]={-1,-2,3,-4,-1,1,-1,-1,3,4,-1,8};
    int  n=sizeof(a)/sizeof(a[0]);
    cout<<subArraySum3(a,n);
   
}
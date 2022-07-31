#include<bits/stdc++.h>
using namespace std;
pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    //brute force O(N^2)
    int A=0;
    int B=0;
    int closestSum=INT_MIN;
    for(int i=0; i<arr.size(); i++)
    {     int a=arr[i];
        for(int j=i+1; j<arr.size(); j++)
        {
            int b=arr[j];
            int pairSum=a+b;
            if(pairSum>closestSum && pairSum<x)
            {
                A=a;
                B=b;
                closestSum=pairSum;
            }
            if(pairSum==x)
            {
                return make_pair(a, b);
            }
            
        }
    }
    return make_pair(A,B);
}
pair<int, int> closestSum2(vector<int> arr, int x){
    // your code goes here
    //Binary Search Approch O(LogN)
    int s=0;
    int e= arr.size()-1;
    int a=0;
    int b=0;
    int dif=INT_MAX;
   
    while(s<e)
    {
        int absdif=abs(arr[s]+arr[e]-x);
        if(absdif<dif)
        {
            a=s;
            b=e;
            dif=absdif;
        }
        if(arr[s]+arr[e]>x)
        e--;
        else
        s++;
    }
    return make_pair(arr[a],arr[b]);
    
}
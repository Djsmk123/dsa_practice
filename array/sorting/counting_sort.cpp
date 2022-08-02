#include<bits/stdc++.h>
using namespace std;
void  counting_sort(vector<int>& a)
{
    int largest=-1;
  for(int i=0; i<a.size(); i++)
  {
    largest=max(largest,a[i]);
  }
  vector<int> freq(largest+1,0);
 for(int x:a)
 {
    freq[x]++;
 }
 int j=0;
 for(int i=0; i<=largest; i++)
 {
    while(freq[i]>0)
    {
        a[j]=i;
        freq[i]--;
        j++;
    }
 }

}

int main(){
     vector<int> arr={ 1,4,5,62,23,123,34,123,4,231,234,5657,12314,412,1,324,590};
    counting_sort(arr);
     for(auto x:arr)
     {
        cout<<x<<" ";
     }
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 // This is the MountainArray's API interface.
  // You should not implement it, or speculate about its implementation
  class MountainArray {
    public:
     int get(int index);
     int length();
};


class Solution {
public:
    int findInMountainArray(int target,MountainArray &mountainArr) {
        int peak_index=peakIndexInMountainArray(mountainArr);
        int ans=binarySearch(mountainArr,0,peak_index,target);
        if(ans==-1)
        ans=binarySearch(mountainArr,peak_index+1,mountainArr.length()-1,target);
        return ans;
    }
   int binarySearch(MountainArray arr,int start, int end, int x)
{
 
    // Checking the sorted order of the given array
    bool isAsc = arr.get(start) < arr.get(end);
    while (start <= end) {
        int middle = start + (end - start) / 2;
 
        // Check if x is present at mid
        if (arr.get(middle) == x)
            return middle;
 
        // Ascending order
        if (isAsc == true) {
 
            // If x greater, ignore left half
            if (arr.get(middle) < x)
                start = middle + 1;
 
            // If x smaller, ignore right half
            else
                end = middle - 1;
        }
 
        // Descending order
        else {
 
            // If x smaller, ignore left half
            if (arr.get(middle) > x)
                start = middle + 1;
 
            // If x greater, ignore right halfz
            else
                end = middle - 1;
        }
    }
 
    // Element is not present
    return -1;
}
    
    int peakIndexInMountainArray(MountainArray & arr) {
        int s=0;
        int e=arr.length()-1;
        int mid;
        while(s<e)
        {
          mid=s+(e-s)/2;
          if(arr.get(mid)>arr.get(mid+1))
          e=mid;
          else
          s=mid+1;

        }
        return s;
    }
};

class Solution{
    public:
    bool search(vector<int> &nums,int target)
    {
        int pivot = findPivot(nums);

      
        if (pivot == -1) {
          
            return binarySearch(nums, target, 0 , nums.size() - 1);
        }

       
        if (nums[pivot] == target) {
            return true;
        }

        if (target >= nums[0]) {
            return binarySearch(nums, target, 0, pivot - 1);
        }

        return binarySearch(nums, target, pivot + 1, nums.size() - 1);

       
    }
    int binarySearch(vector<int> & nums,int t,int s,int e)
    {
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            cout<<mid<<endl;
            if(nums[mid]==t)
            return true;
            if(t>nums[mid])
            s=mid+1;
            else
            e=mid-1;
        }
        return false;
    }
    int findPivot(vector<int>& arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            // 4 cases over here
            if (mid < end && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            if (mid > start && arr[mid] < arr[mid - 1]) {
                return mid-1;
            }

            // if elements at middle, start, end are equal then just skip the duplicates
            if (arr[mid] == arr[start] && arr[mid] == arr[end]) {
                // skip the duplicates
                // NOTE: what if these elements at start and end were the pivot??
                // check if start is pivot
                if (start < end && arr[start] > arr[start + 1]) {
                    return start;
                }
                start++;

                // check whether end is pivot
                if (end > start && arr[end] < arr[end - 1]) {
                    return end - 1;
                }
                end--;
            }
            // left side is sorted, so pivot should be in right
            else if(arr[start] < arr[mid] || (arr[start] == arr[mid] && arr[mid] > arr[end])) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

};
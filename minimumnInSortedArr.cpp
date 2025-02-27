// Classic binary search problem.

// Looking at subarray with index [start,end]. We can find out that if the first member is less than the last member, there's no rotation in the array. So we could directly return the first element in this subarray.

// If the first element is larger than the last one, then we compute the element in the middle, and compare it with the first element. If value of the element in the middle is larger than the first element, we know the rotation is at the second half of this array. Else, it is in the first half in the array.



class Solution {
public:
    int findMin(vector<int>& num) {
        // int n = nums.size();
        // int start =0, end = n-1;
        // while(start<=end)
        // {
        //     int mid = start +(end-start)/2;
        //     int prev = (mid+n-1)%n;
        //     int next = (mid+1)%n;
        //     if(nums[mid]<=nums[prev] and nums[mid]<=nums[next])
        //     {
        //         return nums[mid];
        //     }
        //     else if(nums[mid]<= nums[end])
        //     {
        //         end = mid-1;
        //     }
        //     else if(nums[start]<=nums[mid])
        //     {
        //         start =mid+1;
        //     }
        // }
        // return -1;
        
                int start=0,end=num.size()-1;
        
        while (start<end) {
            if (num[start]<num[end])
                return num[start];
            
            int mid = (start+end)/2;
            
            if (num[mid]>=num[start]) {
                start = mid+1;
            } else {
                end = mid;
            }
        }
        
        return num[start];
        
    }
};

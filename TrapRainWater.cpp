    public int trapBrute(int[] height) {
        int res = 0;
        for (int i = 0; i < height.length; i++){
            int leftMax = 0, rightMax = 0;
            for (int k = i; k >= 0; k--){
                leftMax = Math.max(leftMax, height[k]);
            }
            for (int j = i; j < height.length; j++){
                rightMax = Math.max(rightMax, height[j]);
            }
            res += Math.min(leftMax, rightMax) - height[i];
        }
        return res;
    }
    
    //O(n^2)
    
    
    // Approch :
// get the left wall,
// get the right wall
// if if left wall is smaller, check the left value and move the left pointer
// if right wall is smaller, check the right value and move the right pointer

// TC: O(n)
//     SC: O(1)
class Solution {
public:
    int trap(vector<int>& height) {
        int res =0;
        int n = height.size();
        if(n==0)
        {
            return n;
        }
//         vector<int> left(n,0);
//         vector<int> right(n,0);
        
//         left[0] = height[0];
//         for(int i=1;i<n;i++)
//         {
//             left[i] = max(left[i-1], height[i]);
//         }
        
//         right[n-1] = height[n-1];
//         for(int i=n-2;i>=0 ; i--)
//         {
//             right[i] = max(right[i+1], height[i]);
//         }
        
//         for(int i=0;i< n;i++)
//         {
//             res += min(left[i], right[i])- height[i];
//         }
//         return res;
        int l =0, r = n-1;
        int lMax = INT_MIN, rMax =INT_MIN;
        while(l<r)
        {
            if(lMax < height[l])
            {
                lMax = height[l];
            }
            if(rMax< height[r])
            {
                rMax = height[r];
            }
            if(lMax<=rMax)
            {
                res +=(lMax-height[l]);
                l++;
            }
            else
            {
                res+=(rMax-height[r]);
                r--;
            }
        }
        return res;
    }
};

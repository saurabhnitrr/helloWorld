def minSubarray(nums, target):
    l = 0
    current = 0
    ans = float('inf')
    
    for r in range(len(nums)):
        current += nums[r]
        if current <= target:
            continue
        while current - nums[l] > target:
            current -= nums[l]
            l += 1
        ans = min(ans, r - l + 1)
        
    return ans if ans != float('inf') else -1

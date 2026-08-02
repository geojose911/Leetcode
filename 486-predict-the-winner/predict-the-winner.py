class Solution(object):
    def predictTheWinner(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        def  solve(l,r):
            if l==r:
                return nums[l]
            left=nums[l]-solve(l+1,r)
            right=nums[r]-solve(l,r-1)
            return max(left,right)
        return solve(0,len(nums)-1)>=0
                
                

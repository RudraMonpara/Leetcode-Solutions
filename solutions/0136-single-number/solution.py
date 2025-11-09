class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        idx=0
        for num in nums:
            idx ^= num
        return idx 

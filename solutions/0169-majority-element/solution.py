class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        for num in set(nums):
            if nums.count(num) > n / 2:
                return num

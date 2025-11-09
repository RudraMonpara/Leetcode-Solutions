class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        array = set(nums)
        if nums != [] and len(array) == len(nums):
            return False
        return True

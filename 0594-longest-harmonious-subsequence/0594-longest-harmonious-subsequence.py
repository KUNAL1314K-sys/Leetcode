class Solution:
    def findLHS(self, nums: list[int]) -> int:
        nums = sorted(nums)
        left = 0
        count = 0
        ans = 0

        for right in range(len(nums)):

            while nums[right] - nums[left] > 1:
                left += 1
                count -= 1

            count += 1

            if nums[left] + 1 == nums[right]:
                ans = max(ans, count)

        return ans
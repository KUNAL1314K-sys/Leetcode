class Solution:
    def longestOnes(self, nums: list[int], k: int) -> int:
        left = 0
        count = 0
        mx = 0

        for right in range(len(nums)):
            if nums[right] == 0:
                count += 1

            while count > k:
                if nums[left] == 0:
                    count -= 1
                left += 1

            mx = max(mx, right - left + 1)

        return mx
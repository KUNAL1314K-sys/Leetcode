class Solution:
    def findMaxAverage(self, nums: list[int], k: int) -> float:
        mx = float('-inf')
        left = 0
        sm = 0

        for right in range(len(nums)):
            sm += nums[right]

            if right - left + 1 == k:
                mx = max(mx, sm)

                sm -= nums[left]
                left += 1

        return mx / k

            
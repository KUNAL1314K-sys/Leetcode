class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        ps = []
        s = 0
        mn = float('inf')
        left = 0

        for i in range(len(nums)):
            s += nums[i]
            ps.append(s)

        for right in range(len(nums)):
            while left <= right:
                curr = ps[right] - (ps[left - 1] if left > 0 else 0)

                if curr >= target:
                    mn = min(mn, right - left + 1)
                    left += 1
                else:
                    break

        return 0 if mn == float('inf') else mn
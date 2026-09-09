class Solution:
    def countCommas(self, n: int) -> int:
        ans = 0
        x = 1000

        while x <= n:
            ans =ans + n - x + 1
            x = x * 1000

        return ans
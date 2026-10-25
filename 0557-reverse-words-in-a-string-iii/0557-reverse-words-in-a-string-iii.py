class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        ans = ""

        for word in words:
            ans += word[::-1] + " "

        return ans.strip()
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        i, j = 0, 0
        count = 0
        count_final = 0
        seen = set()

        while j < len(s):
            if s[j] not in seen:
                seen.add(s[j])
                count = j - i + 1
                count_final = max(count_final, count)
                j += 1
            else:
                seen.remove(s[i])
                i += 1
        return count_final
            

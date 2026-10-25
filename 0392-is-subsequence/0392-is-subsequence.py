class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        n = len(s)
        m  = len(t)
        count = 0
        i,j=0,0
        while i<n and j<m:
            if s[i] == t[j]:
                count+=1
                i+=1
            j+=1
        return count == n



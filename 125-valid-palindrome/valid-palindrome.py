class Solution:
    def isPalindrome(self, s: str) -> bool:

        cleaned = s.lower().replace(" ", "")
        
      
        filtered = "".join([ch for ch in cleaned if ch.isalnum()])
        
    
        return filtered == filtered[::-1]

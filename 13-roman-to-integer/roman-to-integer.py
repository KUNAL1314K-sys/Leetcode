class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman_dict = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }
        
        total = 0
        prev_value = 0
        
    
        for ch in s[::-1]:
            value = roman_dict[ch]
            if value < prev_value:
                total = total - value  
            else:
                total = total + value   
            prev_value = value
        
        return total


        
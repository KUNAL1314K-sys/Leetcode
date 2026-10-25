class Solution:
    def reverseVowels(self, s: str) -> str:

        vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}
        
        chars = list(s)
        
        start = 0
        end = len(chars) - 1
        
        while start < end:

            if chars[start] not in vowels:
                start += 1

            elif chars[end] not in vowels:
                end -= 1

            else:
                chars[start], chars[end] = chars[end], chars[start]
                start += 1
                end -= 1
        return "".join(chars)

                
        
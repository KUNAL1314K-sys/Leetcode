class Solution:
    def checkIfExist(self, arr: list[int]) -> bool:
        seen = set()
        for i in arr:
            if (i//2 in seen and i%2==0) or i*2 in seen:
                return True
            else:
                seen.add(i)
        return False
        
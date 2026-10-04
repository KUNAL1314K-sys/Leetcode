class Solution:
    def isThree(self, n: int) -> bool:


        pm = int(sqrt(n))

        if pm * pm != n:
            return False

        count = 0
        for i in range(1, pm):
            if pm % i == 0:
                count += 1

        return count == 1
        
        
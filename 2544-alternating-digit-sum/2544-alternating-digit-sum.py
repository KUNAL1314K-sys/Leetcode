class Solution:
    def alternateDigitSum(self, n: int) -> int:
        count = 0
        sm =0
        for i in str(n):
            if count%2!=0:
                sm = sm - int(i)
            else:
                sm = sm + int(i)
            count+=1
        return sm
        
class Solution:
    def subarraysDivByK(self, nums: list[int], k: int) -> int:
        sm = 0

        count =0
        
        freq = {0:1}
        for i in nums:
            sm = sm +i
            rem = sm%k
            if rem in freq:
                count = count + freq[rem]
                freq[rem] += 1
            
            else:
                freq[rem] = 1
 
        return count
            


        
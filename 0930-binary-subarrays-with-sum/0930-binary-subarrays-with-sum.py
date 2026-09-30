class Solution:
    def numSubarraysWithSum(self, nums: list[int], goal: int) -> int:
        
        dic ={0:1}
        sm = 0
        ps = []
        count =0 
        # goal = arr[j] - arr[i-1]
        for i in nums:
            sm += i
            ps.append(sm)

        for x in ps:
            if x-goal in dic:
                count+=dic[x-goal]

            if x in dic:
                dic[x] += 1
            else: 
                dic[x] =1
        return count

        


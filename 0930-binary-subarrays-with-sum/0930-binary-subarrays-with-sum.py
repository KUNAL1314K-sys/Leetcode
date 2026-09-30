class Solution:
    def numSubarraysWithSum(self, nums: list[int], goal: int) -> int:
        
        dic ={0:1}
        sm = 0
        ps = []
        count =0 
        # goal = arr[j] - arr[i-1]
        for i in nums:
            sm += i
            if sm - goal in dic:
                count = count + dic[sm-goal]
            if sm in dic:
                dic[sm] += 1
            else:
                dic[sm] = 1
        return count
        


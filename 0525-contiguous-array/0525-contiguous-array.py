class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        dic ={0:-1}
        n = [-1 if x == 0 else x for x in nums ]
        curr = 0
        sm = 0
        count = 0
        longest = 0
        for i in range(len(n)):
            sm = sm + n[i]
            if sm in dic:
                count = i - dic[sm] 
                if longest < count:
                    longest = count
            else:
                dic[sm] = i
        return longest
        

    
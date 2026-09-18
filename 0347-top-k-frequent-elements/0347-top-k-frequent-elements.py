class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        dic = {} 
        for i in range(len(nums)):
            if nums[i] in  dic:
                dic[nums[i]] = dic[nums[i]]+1
            else:
                dic[nums[i]] = 1
        result = sorted(dic,key=dic.get,reverse=True)[0:k]
        return result
        
        
        
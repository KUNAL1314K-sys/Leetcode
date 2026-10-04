class Solution:
    def checkSubarraySum(self, nums: list[int], k: int) -> bool:
        dic ={0:-1}
        s =0
        for i in range(len(nums)):
            s = s + nums[i]
            rem = s%k
            if rem in dic:
                if i-dic[rem]>=2:
                    return True
            else:
                dic[rem] = i
        return False

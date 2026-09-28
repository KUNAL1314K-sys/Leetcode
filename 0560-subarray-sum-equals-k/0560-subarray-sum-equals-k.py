class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        ps = []
        sm = 0
        count = 0
        for i in nums:
            sm = sm + i
            ps.append(sm)

        freq = {0:1}
        for x in ps:
            if x-k in freq:
                count = count + freq[x-k]
            
            if x in freq:
                freq[x] = freq[x] + 1
            else:
                freq[x] = 1
        return count
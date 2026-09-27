class Solution:
    def intersect(self, nums1: list[int], nums2: list[int]) -> list[int]:
        dic ={}
        l =[]
        for i in range(len(nums1)):
            if nums1[i] in dic:
                dic[nums1[i]]+=1
            else:
                dic[nums1[i]] = 1
        
        for i in nums2:
            if i in dic and dic[i]>=1:
                l.append(i)
                dic[i] = dic[i]-1
        return l





































        # l = []
        # seen = set()
        # n1 = len(nums1)
        # n2 = len(nums2)
        # if  n1>n2:
        #     seen = set(nums1)
        #     for i in nums2:
        #         if i in seen:
        #             l.append(i)
        # else:
        #     seen = set(nums2)
        #     for i in nums1:
        #         if i in seen:
        #             l.append(i)
        # return l
        

        
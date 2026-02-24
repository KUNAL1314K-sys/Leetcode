class Solution(object):
    def numberOfEmployeesWhoMetTarget(self, hours, target):
        """
        :type hours: List[int]
        :type target: int
        :rtype: int
        """
        count = 0
        for i  in hours:
            if(target<=i):
                count = count + 1
        
        return count 
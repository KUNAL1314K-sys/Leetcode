class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        buy = 10000
        profit = 0
        for i in prices:
            if i<buy:
                buy = i
            elif i - buy > profit:
                profit = i-buy
        return profit
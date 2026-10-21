class Solution:
    def totalFruit(self, fruits: list[int]) -> int:
        mp = collections.defaultdict(int)
        left = 0
        result = 0
        total = 0

        for right in range(len(fruits)):
            mp[fruits[right]] += 1
            total +=1

            while len(mp) > 2:
                mp[fruits[left]] -=1
                total -=1
                
                if mp[fruits[left]]<=0:
                    del mp[fruits[left]]
                left +=1
            result = max(result,total)

        return result
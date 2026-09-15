from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        anagram = defaultdict(list)
        result = []
        for i in strs:
            sort = tuple(sorted(i))
            anagram[sort].append(i)
        for i in anagram.values():
            result.append(i)
        return result  
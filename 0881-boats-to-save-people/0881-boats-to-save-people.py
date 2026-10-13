class Solution:
    def numRescueBoats(self, people: list[int], limit: int) -> int:
        people.sort()
        start = 0
        end = len(people) - 1
        count = 0

        while start <= end:
            if people[start] + people[end] <= limit:
                start += 1

            end -= 1
            count += 1

        return count
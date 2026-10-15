class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        count =0
        stack1 =[]
        stack2 =[]
        for i in s:
            stack1.append(i)
            if stack1[-1] == '#':
                stack1.pop()
                if len(stack1) >0:
                    stack1.pop()

        for i in t:
            stack2.append(i)
            if stack2[-1] == '#':
                stack2.pop()
                if len(stack2)>0:
                    stack2.pop()
        return True if stack1==stack2 else False


        
class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        rev1 = int(str(num)[::-1])
        rev2 = str(rev1)[::-1]
        
        if(int(rev2) == num):
            return True
        else:
            return False
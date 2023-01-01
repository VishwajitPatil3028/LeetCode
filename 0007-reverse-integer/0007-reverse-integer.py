class Solution:
    def reverse(self, x: int) -> int:
        s = str(x)
        if(s[0]=='-'):
            a = s[1:]
            rev =  -(int(a[::-1]))
        else:
            rev = int(s[::-1])
        
        if(rev >= -2147483648 and rev <= 2147483647):
            return rev
        else :
            return 0
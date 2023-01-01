class Solution:
    def reverseBits(self, n: int) -> int:
        a =bin(n).replace("0b", "") 
        # print(type(a))
        l = len(a)
        s = '0' * (32-l) + a
        
        s = s[::-1]
        g =int(s,2)
        return g 
        
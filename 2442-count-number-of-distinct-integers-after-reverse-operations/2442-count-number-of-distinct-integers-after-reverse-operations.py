class Solution:
    def countDistinctIntegers(self, nums: List[int]) -> int:
        s = set()
        for i in nums:
            a = str(i)[::-1]
            s.add(i)
            s.add(int(a))
        return len(s)
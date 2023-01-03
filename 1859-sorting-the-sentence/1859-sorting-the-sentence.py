class Solution:
    def sortSentence(self, s: str) -> str:
        li = s.split(" ")
        lis = [None] * len(li)
        for i in range(len(li)):
            lis[int(li[i][-1])-1] = li[i][:-1]
        return ' '.join(lis)
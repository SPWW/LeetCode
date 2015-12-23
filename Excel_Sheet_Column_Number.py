class Solution:
    # @param {string} s
    # @return {integer}
    word = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    def titleToNumber(self,s):
        num = 0
        lens = len(s)
        for c in range(0,len(s)):
            num += 26**(len(s)-1-c)*(1+self.word.index(s[c]))
    
        return num

        

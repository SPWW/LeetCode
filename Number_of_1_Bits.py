class Solution:
    # @param n, an integer
    # @return an integer
    def hammingWeight(self, n):
        weight = 0
        for c in str(bin(n)):
            if c == '1':
                weight = weight + 1
                
        return weight
        

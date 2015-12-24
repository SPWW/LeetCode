class Solution:
    # @param {integer[]} nums
    # @return {integer}
    def majorityElement(self, nums):
        pp = {}
        for num in nums:
            try:
                pp[num] = pp[num]+1
            except:
                pp[num] = 1
        
        temp = 0 
        for key in pp.keys():
            if temp < pp[key]:
                temp = pp[key]
                ret = key
                
        return ret
        

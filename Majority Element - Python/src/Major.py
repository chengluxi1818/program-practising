def majorityElement(self, nums):
    """
    :type nums: List[int]
    :rtype: int
    """
    dict = {}
    for n in nums:
        dict[n] = dict.get(n, 0) + 1
        
    for (key, value) in dict.iteritems():
        if value > len(nums)/2:
            return key
    '''
    for n in nums:
        if dict[n] > len(nums)/2:
            return n
    '''
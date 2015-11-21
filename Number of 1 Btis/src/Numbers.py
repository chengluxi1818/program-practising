def hammingWeight(self, n):
    """
    :type n: int
    :rtype: int
    """
    return bin(n).count("1")
    
    
def hammingWeight2(self, n):
    count = 0
    while n:
        n = n & (n-1)
        count += 1
    return count
    

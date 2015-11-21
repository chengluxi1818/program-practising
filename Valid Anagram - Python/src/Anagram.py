def isAnagram(self, s, t):
    """
    :type s: str
    :type t: str
    :rtype: bool
    """
    #return sorted(s) == sorted(t)
    if not len(s) == len(t):
        return False
    
    dict = {}
    for si in s:
        dict[si] = dict.get(si, 0) + 1
    for ti in t:
        dict[ti] = dict.get(ti, 0) - 1
        if dict[ti] < 0:
            return False
    return True
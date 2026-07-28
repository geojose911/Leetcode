class Solution(object):
    def smallestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        half_len = len(s) // 2
        
        first_half = "".join(sorted(s[:half_len]))
        
        middle = s[half_len] if len(s) % 2 != 0 else ""
        
        return first_half + middle + first_half[::-1]
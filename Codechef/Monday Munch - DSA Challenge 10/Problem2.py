class Solution:
    def check_odd_pairs(self, a, b, c):
        sum = a + b + c
        
        if sum % 2 == 1:
            return "YES"
        else:
            return "NO"
        

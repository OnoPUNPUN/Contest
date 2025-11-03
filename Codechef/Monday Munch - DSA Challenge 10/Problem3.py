class Solution:
    def check_array(self, A):
        n = len(A)
        
        if n == 1:
            return "NO"
            
        t = sum(A)
        
        if t % 2 == 1:
            return "NO"
            
        oc = 0
        for a in A:
            if a % 2 == 1:
                oc += 1
                
        
        if oc == 1:
            return "NO"
        else:
            return "YES"

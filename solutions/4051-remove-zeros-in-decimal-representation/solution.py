class Solution:
    def removeZeros(self, n):
        a = str(n)    
        a = a.replace("0", "")  
        return int(a)           


# Day 12 Problem
class Solution:
    
    #Function to find the smallest positive number missing from the array.
    def missingNumber(self,arr):
        #Your code here
        n=len(arr)
        for i in range(n):
            while 1<=arr[i]<=n and arr[i]!=arr[arr[i]-1]:
                temp=arr[i]
                arr[i]=arr[arr[i]-1]
                arr[temp-1]=temp
        for i in range(1,n+1):
            if i!=arr[i-1]:
                return i
                
        return n+1

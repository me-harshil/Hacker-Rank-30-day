def solve(n,nums):
   ans = 0
   nums.sort()
   a = 0
   for i in range(n - 1, -1, -1):
      cand = nums[i] + n - i
      if cand > a:
         a = cand
   for x in nums:
      if x + n >= a:
         ans += 1
   return ans
n=int(input())
nums = list(map(int,input(). strip(). split()))[:n]
print(solve(n,nums))
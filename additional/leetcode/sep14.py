nums = list(map(int, input().split()))


if not nums: print(0)
if len(nums) < 3: print(max(nums))

dp = [0]*len(nums)
dp[0] = nums[0]
dp[1] = max(nums[0], nums[1])
for i in range(2, len(nums)):
    dp[i] = max(nums[i]+dp[i-2], dp[i-1])
print(dp[-1])

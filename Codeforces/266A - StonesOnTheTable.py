n = input()
stones = raw_input()
result = 0
for x in range(0, n - 1):
	if(stones[x] == stones[x + 1]):
		result = result + 1
print result
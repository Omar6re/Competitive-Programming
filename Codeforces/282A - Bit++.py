n = input()
result = 0
for x in range(0,n):
	st = raw_input()
	if "+" in st:
		result = result + 1
	else:
		result = result - 1
print result
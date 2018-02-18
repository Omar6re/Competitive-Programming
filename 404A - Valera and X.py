n = input()
square = []
for x in range(0,n):
	s = raw_input()
	square.append(s)
i = 0
j = n - 1
flag = True
diag = square[0][0]
op = square[0][1]
if (diag == op):
	flag = False

for x in range (0,len(square)):
	if (flag == False):
		break
	for y in range(0,len(square[x])):
		if (y == i or y == j):
			if (square[x][y] != diag):
				flag = False
				break
		else:
			if (square[x][y] != op):
				flag = False
				break
	i += 1
	j -= 1

if (flag == True):
	print "YES"
else:
	print "NO"
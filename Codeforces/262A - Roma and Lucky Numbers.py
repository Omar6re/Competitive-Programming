n = list(input().strip().split(" "))
numbers = list(input().strip().split(" "))
result = 0
for number in numbers:
	numb = str(number)
	if (numb.count('4') + numb.count('7') <= int(n[1])):
		result += 1
print (result)
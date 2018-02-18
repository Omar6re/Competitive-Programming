n = input()
people = list(input().strip().split(" "))
people = list(map(int, people))
people.sort()
_sum = 0
result = 0
for person in people:
	if (person >= _sum):
		result = result + 1
		_sum = _sum + person
print (result)
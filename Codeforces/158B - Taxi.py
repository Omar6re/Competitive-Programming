n = int(input())
people = list(input().strip().split(" "))
people = list(map(int, people))
result = 0
aux = people.count(1)
result = result + people.count(4) + people.count(3) + people.count(2) // 2
aux = aux - people.count(3)
if(people.count(2) % 2 == 1):
	result = result + 1
	aux = aux - 2
if(aux > 0):
	result = result + (aux + 3) // 4
print(result)
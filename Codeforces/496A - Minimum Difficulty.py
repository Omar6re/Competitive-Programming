n = input()
h = list(input().strip().split(" "))
h = list(map(int,h))
listas = []
aux = []

for x in range(1, int(n) - 1):
	aux = set(h)
	aux1 = []
	aux1.append(h[x])
	aux -= set(aux1)
	listas.append(sorted(aux))

result = []
for combinacion in listas:
	r = []
	for y in range(0,len(combinacion) - 1):
		d = int(combinacion[int(y) + 1]) - int(combinacion[int(y)])
		r.append(d)
	result.append(max(r))
print (min(result))
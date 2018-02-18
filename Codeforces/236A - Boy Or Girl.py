st = raw_input()
characters = []
characters = list(set(characters))
different = 0
for char in st:
	if char not in characters:
		different = different + 1
		characters.append(char)
if(different % 2 == 0):
	print "CHAT WITH HER!"
else:
	print "IGNORE HIM!"
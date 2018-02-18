import sys

def ALL_CAPS(word):
	for letter in word:
		if (ord(letter) > 90):
			print word
			sys.exit(0)
	print word.lower()
	sys.exit(0)

word = raw_input()
count = 0
flag = False
new_word = ""

for char in word:
	if (count == 0 and ord(char) > 90): #first lower
		flag = True
		count = count + 1
		new_word = new_word + chr(ord(char) - 32)
		continue
	elif(count == 0 and ord(char) <= 90):
		ALL_CAPS(word)
	
	if (flag == True and ord(char) > 90): #first lower
		print word
		sys.exit(0)
	else:
		new_word = new_word + chr(ord(char) + 32)
print new_word
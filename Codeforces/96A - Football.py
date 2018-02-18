import sys
players = raw_input()
current = 1
for x in range (0,len(players) - 1):
	if(players[x] == players[x + 1]):
		current = current + 1
	else:
		current = 1
	if (current == 7):
		print "YES"
		sys.exit(0)
print "NO"
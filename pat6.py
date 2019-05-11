n=int(input())
sp=1
for i in range(n+1,0,-1):
	if i==n+1:
		for j in range(2*n):
			print("*",end="")
		print()
	for j in range(i+1):
		print("*",end="")
	for j in range(sp+1):
		print(" ",end="")
	sp=sp+2
	for j in range(i+1):
		print("*",end="")
	print()

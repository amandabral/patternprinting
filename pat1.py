
n=int(input())

for i in range(1,n+1):
	for j in range(n+1,i,-1):
		print(end=" ")
	print("#",end="")
	for j in range(1,i):
		print("@",end="")
	for j in range(2,i):
		print("@",end="")
	if i!=1:
		print("#",end="")
	print()
for i in range(1,2*n+2):
	print("$",end="")
print()
for i in range(n, 0,-1):
	for j in range(1,n-i+2):
		print(end=" ")
	print("#",end="")
	for j in range(1,2*i-2):
		print("@", end="")
	if i!=1:
		print("#",end="")
	print()

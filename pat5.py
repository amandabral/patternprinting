n=int(input())
left,middle,right=0,n-1,n+1

for row in range(0,2*n-1):
	if row<n:
		left=left+1
		print(left,end="")
	else:
		left=left-1
		print(left,end="")
	for col in range(1,n-1):
		if row!=n-1:
			print(" ",end="")
		else:
			print(" "+str(middle),end="")
			middle=middle-1
	if row<n:
		right=right-1
		print(" "+str(right),end="")
	else:
		right=right+1
		print(" "+str(right), end="")
	print()

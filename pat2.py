string=input("Enter string")
n=int(input())

flag=False
x=0

for i in range(len(string)):
	if x==0:
		flag=True
	if x==n-1:
		flag=False
	for j in range(x):
		print("*",end="")
	print(string[i])
	if flag==True:
		x=x+1
	else:
		x=x-1
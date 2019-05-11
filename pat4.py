s=input("Enter string")
n=len(s)
print(''.join(s))
i,j=0,n-1
while i<j:
	s[i],s[j]=s[j],s[i]
	i=i+1
	j=j-1

i,j=0,n-1
while j-i>1:
	s[i],s[j]="*","*"
	print(''.join(s))
	i=i+1
	j=j-1
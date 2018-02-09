num=integer(input())
fact=1
if(num<0):
	printf("enter valid number")
elif(num==0):
	printf("factorial of zero is 1")
else:
	for i in range(1,num+1):
		fact=fact*i
printf(fact)	

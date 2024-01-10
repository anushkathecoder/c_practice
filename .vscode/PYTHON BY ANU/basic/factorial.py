n=input("enter  number")
fact=1
n=int(n)

if(n==1 or n==0):
    print (1)
else:
    int(n) *int(fact(int(n-1)))

print('factorial of num:',fact(n))
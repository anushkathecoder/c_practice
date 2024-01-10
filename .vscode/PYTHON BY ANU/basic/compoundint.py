p=input("enter principal")
r=input("enter rate")
number=input("enter number of times")
t=input("enter time or years")
p=int(p)
r=int(r)
number=int(number)
t=int(t)
#compound interest
a=p*(1+r/number)*number*t
a=float(a)
print(a)
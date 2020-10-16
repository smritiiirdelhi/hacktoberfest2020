N,M=input().split()
n=int(N)
m=int(M)
a="-"
b=".|."

for i in range(0,(n//2)):
    x=3*((n//2)-i)
    y=1+(2*i)
    print((a*x) + (b*y) + (a*x))

x=(m-7)//2
print((a*x) + "WELCOME" + (a*x))

for i in range(0,n//2):
    x=3*(i+1)
    y=2*((n//2)-i)-1
    print((a*x) + (b*y) + (a*x))

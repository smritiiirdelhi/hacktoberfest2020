n,m=input().split()
int(n)
int(m)
arr=[int(i) for i in input().split()]
A=set(int(i) for i in input().split())
B=set(int(i) for i in input().split())
happy=0
for i in arr:
    if i in A:
        happy+=1
    if i in B:
        happy-=1
print(happy)

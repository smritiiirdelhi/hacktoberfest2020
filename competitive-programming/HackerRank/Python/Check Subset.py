t=int(input())
for j in range(t):
    a=int(input())
    A=set(input().split(" "))
    b=int(input())
    B=set(input().split(" "))
    print(A.issubset(B))

k=int(input())
rooms=(int(i) for i in input().split())
single=set()
multiple=set()
for i in rooms:
    if i in single:
        multiple.add(i)
    else:
        single.add(i)
for i in list(single.difference(multiple)):
    print(i)

n=int(input())
names=[]
for i in range(n):
    names.append(input())
#print(names)
nameset=set()
for i in names:
    nameset.add(i)

#print(nameset)
print(len(nameset))

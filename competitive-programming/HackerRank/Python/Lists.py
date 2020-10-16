if __name__ == '__main__':
    N = int(input())
l=[]
for i in range(N):
    cmd=input().split(" ");
    if cmd[0]=="insert":
        l.insert(int(cmd[1]),int(cmd[2]))
    if cmd[0]=="remove":
        l.remove(int(cmd[1]))
    if cmd[0]=="append":
        l.append(int(cmd[1]))
    if cmd[0]=="pop":
        l.pop()
    if cmd[0]=="sort":
        l.sort()
    if cmd[0]=="reverse":
        l.reverse()
    if cmd[0]=="print":
        print(l) 

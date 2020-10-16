if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    a=[]
    for i in range(n):
        if arr[i]< max(arr):
            a.append(arr[i])
    print max(a)

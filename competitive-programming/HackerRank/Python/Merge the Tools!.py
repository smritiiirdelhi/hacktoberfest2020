def merge_the_tools(string, k):
    # your code goes here
    length=len(string)/k
    t=[]
    i=0
    new=""
    for char in string:
        i+=1
        if char not in new:
            new+=char
        if i==k:
            t.append(new)
            new=""
            i=0
    for i in t:
        print(i)


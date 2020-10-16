if __name__ == '__main__':
    s = input()
    a=False
    for i in s:
        a=a or i.isalnum()
    print(a)
    b=False
    for i in s:
        b=b or i.isalpha()
    print(b)
    c=False
    for i in s:
        c=c or i.isdigit()
    print(c)
    d=False
    for i in s:
        d=d or i.islower()
    print(d)
    e=False
    for i in s:
        e=e or i.isupper()
    print(e)
    

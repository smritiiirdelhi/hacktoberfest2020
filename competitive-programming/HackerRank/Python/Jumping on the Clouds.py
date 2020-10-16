#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c):
    jump,i=0,0
    n=len(c)-1
    while i<(n):
        print(i)
        if c[i]==0:
            if not i+1>n and c[i+1]==0:
                if not i+2>n and c[i+2]==0:
                    jump+=1
                    i+=2
                else:
                    i+=1
                    jump+=1
            else:
                i+=2
                jump+=1
    return jump

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c)

    fptr.write(str(result) + '\n')

    fptr.close()

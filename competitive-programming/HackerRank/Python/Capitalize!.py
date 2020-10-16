

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    s_list=s.split(" ")
    new=""
    for i in range(len(s_list)):
        new=new+s_list[i].capitalize()+" "
    return new


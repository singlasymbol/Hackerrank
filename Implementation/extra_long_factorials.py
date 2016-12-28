#!/bin/python3

import sys


n = int(input().strip())

i =1;
mul = 1;

for i in range(1,n+1):
    mul = mul * i;
    
print (mul)

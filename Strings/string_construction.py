#!/bin/python

import sys
from collections import Counter

n = int(raw_input().strip())
for a0 in xrange(n):
    s = raw_input().strip()
    y = Counter(c for c in s)
    count = 0
    for key in y :
        count += 1
    print(count)
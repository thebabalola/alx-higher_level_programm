#!/usr/bin/python3

print(''.join(chr(ch) if ch % 2 == 0 else chr(ch - 32) for ch in range(122, 96, -1)))

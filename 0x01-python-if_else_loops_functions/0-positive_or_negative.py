#!/usr/bin/python3
import random

number = random.randint(-10, 10)
message = "positive" if number > 0 else "zero" if number == 0 else "negative"
print(f"{number} is {message}")

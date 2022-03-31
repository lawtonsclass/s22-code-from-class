import math

n = 0
while n <= 100:
    # make sure sqrt(n) <= 10
    if math.sqrt(n) > 10:
        print('False!')
        quit()
    # get ready to try the next n
    n = n + 1

# if we ever get here, the statement must've been true
print('True!')

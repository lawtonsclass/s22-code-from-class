def isPrime(n):
    # try to divide n by 2, 3, ..., n-1
    j = 2
    while j <= n-1:
        # try to divide n by j
        if n % j == 0:
            # j divided cleanly into n--j is a factor of n!
            return False
        j = j + 1

    # if we get here, there were no factors--it's prime!
    return True

i = 51
while True:
    # check if i is prime
    if isPrime(i):
        # if it is, then print it out and stop the program
        print(i)
        quit() # stops the program
    # otherwise, increment i so that we can check it next
    i = i + 1

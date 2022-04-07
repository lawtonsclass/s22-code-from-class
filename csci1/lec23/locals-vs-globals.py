# this a *global* variable--it is visible to everybody
x = 42

print(x)

def blah():
    global x  # I want to modify the global var x
    x = x + 1  # changes the global var x
    
    print(x * 2) # x exists here too
    y = 3 # this is a local variable
    print(y * 2)

blah()

print(y) # y no longer exists here

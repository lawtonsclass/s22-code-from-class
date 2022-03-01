import math
# now we are allowed to use all the math library functions!

radius = 4.5
area = math.pi * (radius**2)
print(area)

num = input('Enter a #: ')
num_as_float = float(num)
print(math.sqrt(num_as_float))

sin_of_num = math.sin(num_as_float)
print('The sin of', num, 'is', sin_of_num)

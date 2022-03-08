import turtle
import math

# make the turtle a turtle
turtle.shape("turtle")

# make the turtle draw quickly
turtle.speed("fast")


#### L
turtle.up()
turtle.backward(250)
turtle.left(90)
turtle.forward(100)
turtle.down()
turtle.setheading(270) # face south

turtle.forward(200)
turtle.left(90)
turtle.forward(125)

#### space between L and N
turtle.up()
turtle.forward(40)
turtle.down()

### N
turtle.left(90)
turtle.forward(200)

angle = math.degrees(math.atan(125/200))
turtle.right(180 - angle)

l = math.sqrt(125**2 + 200**2)
turtle.forward(l)

turtle.left(180 - angle)
turtle.forward(200)


import random
import turtle

turtle.speed("fastest")
turtle.shape("turtle")

while (-300 <= turtle.xcor() <= 300) and (-300 <= turtle.ycor() <= 300): # stop whenever x or y is < -300 or > 300
    # go forward by a random amount
    turtle.forward(random.randint(10, 50))
    # turn by a random multiple of 90 degrees
    turtle.left(90 * random.randint(0, 3))

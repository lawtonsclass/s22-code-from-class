import turtle
import random
import math

turtle.speed("fastest")

def drawRectangle(ul, w, h):
    # move to ul
    turtle.up()
    turtle.goto(ul[0], ul[1])
    turtle.down()
    # draw a w by h rectangle
    turtle.setheading(0)
    turtle.forward(w)
    turtle.right(90)
    turtle.forward(h)
    turtle.right(90)
    turtle.forward(w)
    turtle.right(90)
    turtle.forward(h)

# draw the bounding square (i.e., the walls)
drawRectangle((-200, 200), 400, 400)

# make the turtle the paddle!
turtle.shape("square")
turtle.fillcolor("pink")
turtle.turtlesize(1.5, 6)
turtle_width = 40

# we'll use these variable to keep track of where the paddle should
# be/where it should move to
paddle_x = -170
paddle_y = 0
turtle.up()
turtle.goto(paddle_x, paddle_y)

def go_up():
    global paddle_y
    paddle_y = paddle_y + 10
    # make sure we don't go past the top
    if paddle_y >= 140:
        paddle_y = 140
    turtle.goto(paddle_x, paddle_y)

def go_down():
    global paddle_y
    paddle_y = paddle_y - 10
    # make sure we don't go past the top
    if paddle_y <= -140:
        paddle_y = -140
    turtle.goto(paddle_x, paddle_y)

# set up functions to run every time the up/down keys are pressed
turtle.onkeypress(go_up, "Up")
turtle.onkeypress(go_down, "Down")
turtle.listen()

import turtle
import random

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

# make the turtle the ball!
turtle.shape("circle")
turtle.fillcolor("pink")
turtle.turtlesize(2, 2) # this makes the turtle 40x40
turtle_width = 40

# we'll use these variable to keep track of where the ball should
# be/where it should move to
turtle_x = random.randint(-100, 100)
turtle_y = 200 - turtle_width/2
turtle_offset = -2

# put the ball in the correct starting location
turtle.up()
turtle.goto(turtle_x, turtle_y)

def drawFrame():
    global turtle_y
    global turtle_offset
    # change the turtle's y coordinate by the offset
    turtle_y = turtle_y + turtle_offset

    # if we hit a wall, bounce off
    if turtle_y <= -200 + turtle_width/2:
        # we either hit or we're trying to go below the bottom wall
        # move the turtle back inside
        turtle_y = -200 + turtle_width/2
        # change the offset so we move upwards now
        turtle_offset = turtle_offset * -1
    if turtle_y >= 200 - turtle_width/2:
        # we either hit or we're trying to go above the top wall
        # move the turtle back inside
        turtle_y = 200 - turtle_width/2
        # change the offset so we move upwards now
        turtle_offset = turtle_offset * -1
    
    # redraw the turtle
    turtle.goto(turtle_x, turtle_y)

while True:
    # repeatedly, draw a new frame
    drawFrame()

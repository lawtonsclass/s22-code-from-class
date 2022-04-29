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

# make the turtle the ball!
turtle.shape("square")
turtle.fillcolor("pink")
turtle.turtlesize(2, 2) # this makes the turtle 40x40
turtle_width = 40

# we'll use these variable to keep track of where the ball should
# be/where it should move to
turtle_x = random.randint(-100, 100)
turtle_y = random.randint(-100, 100)

# pick a random starting direction
# our offsets will both be between -1 and 1
turtle_x_offset = random.uniform(-1, 1)
turtle_y_offset = random.uniform(-1, 1)
# let's normalize our offsets so that the hypotenuse
# of our directoin/offset triangle is 1--that will make sure
# we move at a constant speed no matter what random direction we pick!
hyp = math.sqrt(turtle_x_offset**2 + turtle_y_offset**2)
# divide the offsets by hyp to normalize the length of the 2d direction
turtle_x_offset = turtle_x_offset / hyp   # * 4
turtle_y_offset = turtle_y_offset / hyp   # * 4

# put the ball in the correct starting location
turtle.up()
turtle.goto(turtle_x, turtle_y)

def bounce_if_hit_wall():
    global turtle_x
    global turtle_y
    global turtle_x_offset
    global turtle_y_offset
    
    if turtle_y <= -200 + turtle_width/2: # bottom wall
        # we either hit or we're trying to go below the bottom wall
        # move the turtle back inside
        turtle_y = -200 + turtle_width/2
        # change the y offset so we move upwards now
        turtle_y_offset = turtle_y_offset * -1
    elif turtle_y >= 200 - turtle_width/2: # top wall
        # we either hit or we're trying to go above the top wall
        # move the turtle back inside
        turtle_y = 200 - turtle_width/2
        # change the y offset so we move downwards now
        turtle_y_offset = turtle_y_offset * -1

    if turtle_x <= -200 + turtle_width/2: # left wall
        # move the turtle back inside
        turtle_x = -200 + turtle_width/2
        # change the x offset so we move rightwards now
        turtle_x_offset = turtle_x_offset * -1
    elif turtle_x >= 200 - turtle_width/2: # right wall
        # move the turtle back inside
        turtle_x = 200 - turtle_width/2
        # change the x offset so we move leftwards now
        turtle_x_offset = turtle_x_offset * -1

def drawFrame():
    global turtle_x
    global turtle_y
    global turtle_x_offset
    global turtle_y_offset
    
    # change the turtle's x & y coordinates by the offsets
    turtle_x = turtle_x + turtle_x_offset
    turtle_y = turtle_y + turtle_y_offset

    # if we hit a wall, bounce off
    bounce_if_hit_wall()
    
    # redraw the turtle
    turtle.goto(turtle_x, turtle_y)

while True:
    # repeatedly, draw a new frame
    drawFrame()

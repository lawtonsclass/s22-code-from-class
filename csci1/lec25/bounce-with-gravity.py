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

# the initial velocity is 0
turtle_velocity = 0
# the units for this acceleration variable are units/frame^2
turtle_acceleration = -1.5

# put the ball in the correct starting location
turtle.up()
turtle.goto(turtle_x, turtle_y)

def drawFrame():
    global turtle_y
    global turtle_velocity

    #print(turtle_velocity)

    # the acceleration affects the velocity
    # this is the only additional line that we need to have gravity!!!
    turtle_velocity = turtle_velocity + turtle_acceleration
    # change the turtle's y coordinate by the velocity
    turtle_y = turtle_y + turtle_velocity

    # if we hit a wall, bounce off
    if turtle_y <= -200 + turtle_width/2:
        # we either hit or we're trying to go below the bottom wall
        # move the turtle back inside
        turtle_y = -200 + turtle_width/2
        # change the velocity so we move upwards now
        # turtle_velocity = turtle_velocity * -1 # inelastic collision: lose speed with every bounce
        turtle_velocity = 33.0 # perfectly elastic collision: always bounce upward at 33 units/frame
    if turtle_y >= 200 - turtle_width/2:
        # we either hit or we're trying to go above the top wall
        # move the turtle back inside
        turtle_y = 200 - turtle_width/2
        # change the velocity so we move downwards now
        turtle_velocity = turtle_velocity * -1
    
    # redraw the turtle
    turtle.goto(turtle_x, turtle_y)

while True:
    # repeatedly, draw a new frame
    drawFrame()

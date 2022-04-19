import turtle

def drawRectangle(ul, w, h, color):
    turtle.pencolor(color)
    
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

drawRectangle((50, 100), 200, 300, "black")
drawRectangle((-50, -100), 50, 30, "red")
drawRectangle((0, 0), 75, 75, "blue")


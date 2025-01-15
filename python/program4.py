import math
#input radius from the user
radius = float(input("enter the radius of the circle"))

#calculate the circumference and area
circumference = 2*math.pi*radius
area= math.pi*radius*radius

#output the results
print("circumference of the circle is ", circumference)
print("area of the circle is ", area)

import math

base = float(input('enter the base of the right triangle'))
altitude = float(input('enter the altitude of the right triangle'))

hypotenuse = math.sqrt(base**2 + altitude**2)

print("the hypotenuse of the right triangle is :",hypotenuse)

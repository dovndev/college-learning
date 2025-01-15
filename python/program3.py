#Familiarisation of math module
import math

#1. Square root
num=9
sqrt_value=math.sqrt(num)
print("Square root of",num, "is",sqrt_value )

#2. Power (exponential)
base=2
exponent=3
power_value=math.pow(base, exponent)
print(base, "raised to the power", exponent, "is",power_value)

#3. Logarithm(base e)
log_value= math.log(10)
print("LOgarithm of",num, "is" ,log_value)

#4
factorial_value= math.log(num)
print("Factorial of",num, "is" ,factorial_value)

#5.Trigonometric functions
angle=math.radians(90)
#convert 90 degrees to radius
sin_value = math.sin(angle)
cos_value = math.cos(angle)
tan_value = math.tan(angle)
print("Sine of 90 degtrees is: ",sin_value)
print("Cosine of 90 degrees: ", cos_value)
print("Tangent of 90 degrees: ", tan_value)

#6. Pi and Euler's number(constant)
print("Value of Pi is :", math.pi)
print("Value of Euler's number (e) is :",math.e)

#7. Cieling and floor
decimal_number=4.7
print('Ceiling of',decimal_number, 'is', math.ceil(decimal_number))
print('floor of',decimal_number, "is", math.floor(decimal_number))

#8 Greatest common divisor(GCD)
num1=48
num2=18
gcd_value =math.gcd(num1,num2)
print('GCD of',num1,'and',num2,'is',gcd_value)

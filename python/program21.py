import math

n = int(input('enter a number : '))
prime=True
a=2
while a <= math.sqrt(n):
    if n%a != 0:
        prime=True   
        a+=1  
    else:
        prime=False
        a+=1
        break
if prime==True:
    print('prime number')
else:
    print('not a prime number')
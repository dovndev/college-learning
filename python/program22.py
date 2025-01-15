import math

n = int(input('enter a number : '))
prime=True
a=2
primeno=[]


for i in range(2,n):
    while a <= math.sqrt(i):
        if i%a != 0:
            prime=True   
            a+=1  
        else:
            prime=False
            a+=1
            break
    if prime==True:
        primeno.append(i)
    a=2
print(primeno)


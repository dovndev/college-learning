#sum of digits of a number
n=int(input('Enter no:'))
r=0
while n>0:
    d=n%10
    r+=d
    n=n//10
print("Sum of the digits of the number is :" , r)

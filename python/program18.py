#reverse of a number
num=int(input('Enter no:'))
rev=0

while num>0: 
    a=num%10
    rev=rev*10
    rev= rev+a
    num=num//10
print('The reverse of the given number is= ',rev)

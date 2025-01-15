#sum of n numbers and sum of n even numbers
n=int(input('Enter no:'))
total=0
for i in range(1,n+1):
    total+=i
print("The sum of",n,"given numbers are: ",total)

c=0
for i in range(n):
    if i%2==0:
        c+=i
    else:
        pass
print('The sum of', n ,"even numbers are: " ,c)

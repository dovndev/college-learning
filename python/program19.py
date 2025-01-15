#amstrong number
num=int(input('Enter no:'))
temp = num
sum=0

while num>0: 
    a=num%10
    sum= sum+(a**3)
    num=num//10
print("sum of given number",temp,'is=',sum)
if temp==sum:
    print('The  given number',temp,' is armstrong number ')
else:
    print('The  given number',temp,' is not armstrong number ')

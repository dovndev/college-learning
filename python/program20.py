#perfect number

num=int(input('Enter no:'))
sum=0
i=1
while i < num:
    if num%i == 0:
        sum+=i
        i = i +1
    else:
        i +=1
print("sum of factors of given number",num,'is=',sum)
if num==sum:
    print('The given number',num,' is a perfect number')
else:
    print('The given number',num,' is not a perfect number')


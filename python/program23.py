no = int(input('enter the number of terms : '))
a=0
b=1
print(a,end=" ")

for i in range(1,no):
    temp=a
    a=a+b
    print(a,end=" ")
    b = temp

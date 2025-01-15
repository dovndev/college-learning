a = int(input("enter first number : "))
b = int(input("enter second number : "))
c = int(input("enter third number : "))

if a<b :
    if a<c :
        small = a
    else :
        small = c
else :
    if b<c :
        small = b
    else :
        small = c



print("small is : ",small)

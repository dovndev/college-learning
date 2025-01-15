num = int(input("Entre a number: "))
for i in range (2, num//2+1):
    if num % i == 0:
        print("Not a prime")
        break
else:
    print("A prime")

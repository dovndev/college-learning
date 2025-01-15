row = int(input("Enter a number of rows: "))
num = 1
for i in range (1, row+1):
    for j in range (1, i+1):
        print(num, end = " ")
        num = num+1
    print()

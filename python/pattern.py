a=1
n=int(input("enter number of rows"))
for i in range(1,n+1):
    for j in range(i):
       print(a,end=" ")
       a+=1
    print()

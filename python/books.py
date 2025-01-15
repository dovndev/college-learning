print('enter the book names and no of books')


books={}
a=0
b=0
num = int(input("enter the number of books : "))
while a<num: 

    title = input('enter the name of book : ')
    copy = int(input('enter the number of copies : '))
    a +=1
    books.update({title : copy})
print(books)
while b<num:
    ctitle = input('enter the title of book to update copies : ')
    c = int(input('enter the new no. of copies : '))
    books[ctitle] = c
    b+=1

print(books)

a='happy'
# slicing from 1 to 3
b=a[1:4]
print(b)
# it is also having minus index from -1 to so on from right side
print(a[-4:-1])
# print from 0 to last
print(a[0:])
# print from 0 to 3 
print(a[:4])
c="raviisagoodboy"
# print from starting index 1 to 7 alternate value
print(c[1:8:2])  
print(c[1::3])
# print length
a='ravi kumar jaiswal'
print(len(a))      
print(a.endswith("wal"))
#for counting 
print(a.count('r'))  
#find  the index
print(a.find("kumar"))
# to replace the word
print(a.replace('kumar','kumarji'))

#format string
age = 36
s1 = "My name is John, and I am {}"
print(s1.format(age))


#  ques
letter = ''' Dear <name>
You are selected 
Date : <date>
        
'''
a=input("enter your name\n")
date=input("enter date\n")
letter=letter.replace('<name>',a)
letter=letter.replace('<date>',date)
print(letter)

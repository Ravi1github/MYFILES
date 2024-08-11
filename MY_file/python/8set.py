#set is a collection of non  repeatative element
a={1,2,4,5,6,4,1,"12"}
#print only unique value
print(a)
print(type(a))

#an empty set become dictionary
b={}
print(type(b))
#creating empty set
b=set()
print(type(b))
#add element
b.add(23)
b.add(12)
#we cannot add list and dict. but we can add tuple because its value cannot be changed
b.add((2,4,5))
print(b)
#remove
b.remove(12)
print(b)
# b.clear() clear the set

b={12,12.0,"120"} # 12 and 12.0 are sameS
print(b)
#union
set1 = {"a", "b" , "c"}
set2 = {1, 2, 3}

set1.update(set2)
print(set1)
#insersction
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}

z = x.intersection(y)

print(z)

#ques favlang
favlang={}
a=input("enter the favlang aman : ")
b=input("enter the favlang ram : ")
c=input("enter the favlang shyam : ")
d=input("enter the favlang ravi : ")

favlang['aman']=a
favlang['ram']=b
favlang['shyam']=c
favlang['ravi']=d
print(favlang)


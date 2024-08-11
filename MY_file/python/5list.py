a=[43,3,3.3,"harry",False]
print(a)
#slicing
print(a[0:4])
  
a=[6,3,7,4,2,6,88,5]
#sorting
a.sort()
print(a)
#simialry for reverse
#append
a.append(123)       
print(a)
#insert 500 is inserted at index 2
a.insert(2,500)
print(a)
#pop from index 3
a.pop(3)
print(a)
#remove the value 88
a.remove(88)
print(a)
#get the sum
print(sum(a))
#descending order
thislist = [100, 50, 65, 82, 23]
thislist.sort(reverse = True)
print(thislist)
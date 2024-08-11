i=0
while i<2:
    print(i)
    i=i+1
#for loop
print("for loop\n")
a=[12,3,"a"]
for item in a:
    print(item)
# loop from 0 to 9 and incremeted by 2
for i in range (0,10,2):
    print(i)   

#table
num=5
for i in range(1,10):
    print(f"{num}X{i}={num*i}")   #f is fstring

#ques
a=['ram','shyya','rakesh','sunny','ramm']
for item in a:
    if item.startswith("r"):
        print(item)
        
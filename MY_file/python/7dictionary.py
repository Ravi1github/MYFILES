mydic={
    "name":"ravi",
    "marks": [45,45,43],
     12 : 22,
    "anotherdic":{ "lang":"python"}
}

print(mydic["marks"])
print(mydic['anotherdic']['lang'])
# //changingvalue
mydic["name"]="sunny"
print(mydic["name"])
#finding key
print(mydic.keys())
#getting value
print(mydic.values())
#adding dict

dic1={
    "adrr":"xyz",
    "rank":1
}

mydic.update(dic1)
print(mydic)
#checking whether key is present or  not
print(mydic.get('name'))
#loop for keys  and values
thisdict =	{
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
for x in thisdict:
  print(x)
  print(thisdict[x])


#ques dictionary
dic={
    "fan":"pankha",
    "box":"dabba",
    "pen":"pen",
    "water":"pani"
}
print("enter the value whose meaning you want to know from :",dic.keys())
 
a=input("enter the value ") 
print(dic.get(a))
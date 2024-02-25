a=[1,2,3,4,5]
print(a)
a.append(23)
print(a)
a.insert(0,15)
print(a)

////////////////////

a=[1,2,3,4,5]
print(a)
a[0]=15
print(a)
a.pop()#to delete the element (specify the index){if no index is specified then last ele isremoved}
print(a)

///////////////////

a=[1,2,3,4,5]
b=[6,7,8,9,10]
a.extend(b)
print(a)
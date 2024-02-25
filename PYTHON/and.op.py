a=int(input())
if(a%3==0 and a%5==0):
    print("div by 3 and 5")
else:
    print("no")

    NEWWWW

a=int(input())
if(a%2==0 ):
    print("even")
else:
    print("odd")

    NEWWW      //ELIF   ELIF    ELIF    ELIF    ELIF

a=int(input())
if(a<35 ):
    print("poor")
elif(a>35 and a<70):
    print("avg")
else:
    print("good")

 NEWWW      //ELIF   ELIF    ELIF    ELIF    ELIF

a=int(input("enter a "))
b=int(input("enter b "))
op=input("enter operaiton ")
if(op=="add"):
    print(a+b)
elif(op=="sub"):
     print(a-b)
elif(op=="multiply"):
    print(a*b)
elif(op=="divide"):
    print(a/b)
else:
    print("invlid")

NEWWW      //ELIF   ELIF    ELIF    ELIF    ELIF

    s=int(input("enter score "))
if(s>70):
    name=input("enter name ")
    dep=input("enter dep ")
    loc=input("enter loc ")
else:
    print("not eligibble ")

NEWWW      //ELIF   ELIF    ELIF    ELIF    ELIF

s=int(input("enter salary "))
age=int(input("enter age "))
if(s>=20000 or age<=25):
    loan=int(input("enter loan amt"))
    if(loan>=50000):
        print("eligibel")
    else:
        print("max loan amt 50000")
else:
    print("no")

NEWWW      //ELIF   ELIF    ELIF    ELIF    ELIF

s1=int(input("enter mark "))
s2=int(input("enter mark "))
s3=int(input("enter mark "))
s4=int(input("enter mark "))
s5=int(input("enter mark "))
avg=(s1+s2+s3+s4+s5)/5
print("avg= ",avg)
if(avg<35):
    print("additional classes is required ")
else:
    print("no need")
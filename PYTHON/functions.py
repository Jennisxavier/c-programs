def add():
    a=int(input("enter a "))
    b=int(input("enter b "))
    c=a+b
    print("sum is ",c)
    
def sub():
    a=int(input("enter a "))
    b=int(input("enter b "))
    c=a-b
    print("diff is ",c)
add()
sub()

///////////////////////////

def painter(msg):
    print("the message is \"",msg,"\".")

painter("paint my house")

//////////////////////////

def evenodd(no):
    if(no%2==0):
        print("even")
    else:
        print("odd")

a=int(input("entter a no "))
evenodd(a)

////////////////////

def rangeof(a,b):
    for i in range (a,b+1):
        print(i,end=",")
        
a=int(input("enter a "))
b=int(input("enter b "))
rangeof(a,b)

//////////////////






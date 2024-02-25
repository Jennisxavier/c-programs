///////TO DELETE A KEY FRM DICTIONARY
a={"name":"jennis",
    "age":18,
    "location":"coimbatore",
    "frnds":["gow","kar"]
}
print(a)
a.pop("frnds")
print(a)

////////TO ADD A KEY TO DICTIONARY

a={"name":"jennis",
    "age":18,
    "location":"coimbatore",
    "frnds":["gow","kar"]
}
print(a)
print(a.keys())
print(a.values())

////////////////////     MODIFY

a={"name":"jennis",
    "age":18,
    "location":"coimbatore",
    "frnds":["gow","kar"]
}
print(a)
a["location"]="america"
print(a)

///////////////////// ADD A NEW KEY VALUE PAIR

a={"name":"jennis",
    "age":18,
    "location":"coimbatore",
    "frnds":["gow","kar"]
}
print(a)
a["loml"]="karnari"
print(a)

////////TO DELETE

a={"name":"jennis",
    "age":18,
    "location":"coimbatore",
    "frnds":["gow","kar"]
}
print(a)
a["loml"]="karnari"
a.pop("age")
print(a)

#or

a={"name":"jennis",
    "age":18,
    "location":"coimbatore",
    "frnds":["gow","kar"]
}
print(a)
a["loml"]="karnari"
#a.pop("age")              oR
del a["age"]
print(a)
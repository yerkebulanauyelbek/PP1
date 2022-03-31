a,b,c=int(input()),int(input()),int(input())
if a>727 or b>727 or c>727:
    print("Error")
elif a<94 or b<94 or c<94:
    print("Error")
else:
    print(max(a,b,c))
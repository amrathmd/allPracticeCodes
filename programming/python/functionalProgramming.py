l=[i for i in range(10)]
def square(n):
    return n**2 
res=map(square,l)
print([i for i in res])
#performing operations such as even odd cant be performed using map as a result filter is used
def even(n):
    if(n%2==0):
        return True
    else:
        return False
res1=list(filter(even,l))
print([i for i in res1])
#lambda used not to rewrite any function

res2=list(map((lambda num:num**2),l))
print([i for i in res2])
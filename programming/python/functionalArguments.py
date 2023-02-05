#positional Arguments
def multiply(*args):
    y=1
    for num in args:
        y=y*num
    print(y)

multiply(2,3,5,5)

#keyword arguments
def keyWordArgs(**kwargs):
    print(kwargs)

keyWordArgs(a="Amrath",b="Phone")

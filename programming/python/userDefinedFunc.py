#user defined functions
'''syntax:
        def functionName(parameters):
            do something'''
def sumOfNums(a,b):
    print(int(a)+int(b))
sumOfNums(1,2)

def multiply(a,b=4):#here if function gets only one argument other will be default
    print(a*b)
multiply(1)
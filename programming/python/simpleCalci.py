first=input("enter any number:")
operator=input("enter the operator:")
second=input("entet the second number:")
if operator=='+':
    print(int(first)+int(second))
elif operator=='*':
    print(int(first)*int(second))
elif operator=='/':
    print(int(first)/int(second))
elif operator=='-':
    print(int(first)-int(second))
else:
    print("Invalid Operator")
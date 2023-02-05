name="tony stark"
print(name.upper())   #All converts to upper
print(name)  #but leaves the string lower
print(name.find('s'))    #returns index of the s if found else -1

'''INDEXING starts from #0'''
print(name.replace("tony stark","Iron man"))  #but doesnt change the exact string
print(name)
print(name.swapcase())

#trans_table
trans_table=str.maketrans('aeiou','12345')

print(name.translate(trans_table))
print(name)
 #string format

print("my names is {}".format(name))

string="  Amrath   "

print(string.strip())
print(string.lstrip())
print(string.rstrip())
print("it can too foo the foo in the foo".replace('foo','spam',2))#replace a asub string in the given string

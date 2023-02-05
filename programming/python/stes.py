#sets are IMMUTABLE data types
#no indexing in sets therefore UNORDERED DATA TYPE

marks={1,2,3,4}

names="amrath","shoheb","mudabbir"
print(type(names))#by default are sets
for score in marks:
    print(score)
s1={1,2,3,4}
s2={ 1,2,3,4,5,6,7}

print(s1.intersection(s2))
print(s1.union(s2))
print(s1.difference(s2))#gives boolean output
print(s2.issubset(s1))
print(s2.issuperset(s2))

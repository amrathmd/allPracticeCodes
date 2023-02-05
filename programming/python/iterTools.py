import itertools

#chain method
l1=[1,2,3,4]
l2=[10,20,30,40]
i=itertools.chain(l1,l2)
print(i)
print(next(i))
 
#cyclemethod
'''count=0
for i in itertools.cycle(l1):
    if(count<3):
        print(i)
    else:
        break
        count=count+1'''

#tee method
i=iter(l1)
t=itertools.tee(i,5)
print(t)

#slice:getting slice object for chain object

i=itertools.chain(l1,l2)
for value in itertools.islice(i,0,3):
    print(value)


#permutations and combinations method

i=itertools.permutations(l1,2)
print([i for i in i])

i=itertools.combinations(l1,2)
print([i for i in i])
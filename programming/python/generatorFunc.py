def fib():
    first=0
    second=1
    yield second
    while(True):
        next=first+second
        yield next
        first,second=second,next
g=fib()
print(next(g))
for i in range(10):
    print(next(g))
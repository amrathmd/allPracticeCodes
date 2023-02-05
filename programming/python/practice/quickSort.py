def partition(arr,l,r):
    pivot=arr[r]
    j=l-1
    for i in range(l,r):
        if(arr[i]<=pivot):
            j=j+1
            arr[j],arr[i]=arr[i],arr[j]
        arr[j+1],arr[r]=arr[r],arr[j+1]
        return (j+1)


def quickSort(arr,l,r):

    if(l<r):
        pi=partition(arr,l,r)
        quickSort(arr,l,pi-1)
        quickSort(arr,pi+1,r)


arr=[5,4,3,2,1]
quickSort(arr,0,4)
n=len(arr)
for i in range(n):
    print(arr[i])


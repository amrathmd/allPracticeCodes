def mergeSort(arr):
    if(len(arr)>0):
        mid=len(arr)//2

        l=arr[:mid]
        r=arr[mid:]

        mergeSort(l)

        mergeSort(r)
        i=j=k=0
        while(i<len(l) and j<len(r)):
            if(l[i]>r[j]):
                arr[k]=r[i]
                i=i+1
            else:
                arr[k]=r[j]
                j=j+1
            k=k+1
        while(i<len(l)):
            arr[k]=r[i]
            i=i+1
            k=k+1
        while(j<len(2)):
            arr[k]=r[j]
            j=j+1
            k=k+1
        for i in range(k):
            print(arr[k])
arr=[6,4,3,2,1,7,8,9]
mergeSort(arr)
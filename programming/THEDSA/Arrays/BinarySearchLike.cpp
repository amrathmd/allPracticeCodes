/*An element in a sorted array can be found in O(log n) time via binary search. But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way to find an element in the rotated array in O(log n) time.

sortedPivotedArray*/

#include <iostream>
using namespace std;
int search(int arr[], int n, int key)
{
    int lowestIdx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[lowestIdx])
        
            lowestIdx = i;
        
    }
    int startIdx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[startIdx] < key)
        {
            for (int i = 0; i < lowestIdx; i++)
            {
                if (key == arr[i])
                
                    return i;
                
                
                
            }
        }
        if (arr[startIdx] > key)
        {
            for (int i = lowestIdx; i < n; i++)
            {
                if (key == arr[i])
                
                    return i;
                
                
                
            }
        }
    }return -1;
}
int main()
{
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    cout<<search(arr,9,3)<<endl;
}
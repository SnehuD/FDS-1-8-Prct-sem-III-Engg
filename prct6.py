def pivot_place(arr,first,last):
    pivot = arr[first]
    left=first+1
    right=last
    while (True):
        while(left <=right and arr[left]<= pivot):
            left=left+1
        while(left<=right and arr[right]>=pivot):
            right = right - 1
        if (right<left):
            break
        else:
            arr[left],arr[right]=arr[right],arr[left]

    arr[first],arr[right]=arr[right],arr[first]
    return right

def Quicksort(arr,first,last):
          if (first < last):
              p=pivot_place(arr,first,last)
              Quicksort(arr,first,p-1)
              Quicksort(arr,p+1,last)

#Driver Code
n = int(input("\nHow many students are there?"))
arr = []
for i in range(0,n):
     item = float(input("\nEnter percentage marks"))
     arr.append(item)


print("You have entered following scores...\n")
print(arr)

print("\n The sorted Scores using Quick sort...")
Quicksort(arr,0,n-1)
print(arr)
print("Top Five Scores are...")
for i in range (len(arr)-1,len(arr)-6,-1):
    print(arr[i])
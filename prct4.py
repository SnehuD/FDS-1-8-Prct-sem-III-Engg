def SelectionSort(arr, n):
    for i in range(n):
        Min = i
        for j in range(i + 1, n):
            if (arr[j] < arr[Min]):
                Min = j
        temp = arr[i]
        arr[i] = arr[Min]
        arr[Min] = temp

    print(arr)


def BubbleSort(arr, n):
    for i in range(len(arr) - 1):
        for j in range(len(arr) - 1):
            if (arr[j] > arr[j + 1]):
                temp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp
    print(arr)
    print("Top Five Scores are...")
    for i in range(len(arr) - 1, len(arr) - 6, -1):
        print(arr[i])


# Driver Code
print("\nhow many no. of students in first year ?")
n = int(input())
array = []
i = 0
for i in range(n):
    item = float(input("\n Enter percentage marks of student"))
    array.append(item)

print("You have entered following scores...\n")
print(array)

print("\n The sorted Scores using Selection Sort...")
SelectionSort(array, n)

print("\n The sorted Scores using Bubble Sort...")
BubbleSort(array, n)
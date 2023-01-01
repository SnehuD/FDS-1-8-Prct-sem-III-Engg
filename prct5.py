def InsertSort(arr, n):
    for index in range(1, len(arr)):
        currentelement = arr[index]
        pos = index
        while ((currentelement < arr[pos - 1]) and (pos > 0)):
            arr[pos] = arr[pos - 1]
            pos = pos - 1
        arr[pos] = currentelement
    print(arr)


def ShellSort(arr, n):
    gap = len(arr) // 2
    while gap > 0:
        for index in range(gap, len(arr)):
            currentelement = arr[index]
            pos = index
            while (pos >= gap and currentelement < arr[pos - gap]):
                arr[pos] = arr[pos - gap]
                pos -= gap

            arr[pos] = currentelement
        gap = gap // 2
    print(arr)
    print("Top Five Scores are...")
    for i in range(len(arr) - 1, len(arr) - 6, -1):
        print(arr[i])


# Driver Code
print("\nHow many students are there?")
n = int(input())
array = []
i = 0
for i in range(n):
    print("\n Enter percentage marks")
    item = float(input())
    array.append(item)

print("You have entered following scores...\n")
print(array)

print("\n The sorted Scores using Insertion Sort...")
InsertSort(array, n)

print("\n The sorted Scores using ShellSort...")
ShellSort(array, n)
def printCombination(arr, n, r):
    data = [0]*r
    combinationUtil(arr, data, 0, n-1, 0, r)

#arr[] = input
#data[] = tmparray to store current combination
# start & end == index in arr
# index = current index in arr[]
# r = size of combination

def combinationUtil(arr, data, start, end, index, r):
    if index == r:
        for j in range(r):
            print(data[j], end = '')
        print()
        return
    i = start
    while(i <= end and end-i+1 >= r- index):
        data[index] = arr[i]
        combinationUtil(arr, data, i+1, end, index+1,r)
        i += 1
arr = [1,2,3,4,5]
r = 3
n = len(arr)
printCombination(arr, n, r)


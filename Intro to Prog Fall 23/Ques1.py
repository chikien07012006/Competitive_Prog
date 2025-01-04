n, k = [int(x) for x in input().split()]
arr = [int(x) for x in input().split()]

while len(arr) >= k:
    temp = []
    for i in range(0, len(arr) - k + 1):
        ma = -1e18
        for j in range(i, i + k ):
            ma = max(ma, arr[j])
        #print(ma, end = "")
        temp.append(ma)
        
    arr = temp

#print()
print(arr)
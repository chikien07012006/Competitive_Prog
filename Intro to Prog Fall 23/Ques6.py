a = [int(x) for x in input().split()]
a = sorted(a)
result = 0

for i in range(0, len(a)):
    l = 0
    r = len(a)-1
    target1 = a[i]//2 + 7
    locate1 = -1
    while l <= r:
        mid = (l+r) // 2
        if a[mid] <= target1:
            l = mid + 1
        if a[mid] > target1:
            r = mid - 1
            locate1 = mid
            
    if locate1 == -1 or a[locate1] > a[i]:
        continue
    
    l = 0
    r = len(a)-1
    target2 = a[i]
    locate2 = -1
    while l <= r:
        mid = (l+r) // 2
        if a[mid] <= target2:
            l = mid + 1
            locate2 = max(locate2, mid)
        if a[mid] > target2:
            r = mid - 1
    
    result += (locate2 - locate1)

print(result)
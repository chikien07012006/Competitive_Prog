result = []
temp = []
def sinh(pos, start):
    for i in range(start, len(a)):
        temp[pos] = a[i]
        re = []
        for temp1 in range(pos+1):
            re.append(temp[temp1])
        result.append(re)
        if i != len(a) - 1:
            sinh(pos + 1, i + 1)
        
a = [int(x) for x in input().split()]
for i in range(len(a)):
    temp.append(0)

result.append([])    
sinh(0, 0)
print(result)
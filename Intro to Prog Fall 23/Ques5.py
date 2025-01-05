m,n = [int(x) for x in input().split()]
a = []
for i in range(m):
    temp = [int(x) for x in input().split()]
    a.append(temp)

check = []
for i in range(m):
    temp = []
    for j in range(n):
        temp.append(0)
    check.append(temp)

print(a)
print(check)
i,j = 0,0
condi = 'r'
result = []

while len(result) < m*n:
    check[i][j] = 1
    result.append(a[i][j])
    print(i, j)
    if condi == 'r':
        if j == n-1 or check[i][j+1] == 1:
            condi = 'd'
            i = i + 1
        else:
            j = j + 1
        
        continue

    if condi == 'l':
        if j == 0 or check[i][j-1] == 1:
            condi = 'u'
            i = i -1
        else:
            j = j - 1    
                
        continue
    
    if condi == 'd':
        if i == m-1 or check[i+1][j] == 1:
            condi = 'l'
            j = j - 1
        else:
            i = i + 1
        
        continue
    
    if condi == 'u':
        if i == 0 or check[i-1][j] == 1:
            condi = 'r'
            j = j + 1
        else:
            i = i - 1
        
        continue
    
print(result)
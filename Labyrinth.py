from collections import defaultdict

class Diem:
	def __init__(self,x,y,parent,check,duongdi):
		self.diem=[x,y]
		self.parent=parent
		self.duongdi=duongdi
		self.check=check
	
def ktra(tam):
	if tam == "#":
		return "No"
	return "Yes"

class Deque:
	def __init__(self):
		self.xuli=[]
	def remove(self):
		self.xuli=self.xuli[1:]
	def pop(self):
		return self.xuli[0]
	def add(self,diem):
		self.xuli.append(diem)
	def rong(self):
		if len(self.xuli) == 0:
			return "NV"

n,m=[int(x) for x in input().split()]

a=defaultdict(list)
luutru=defaultdict(list)

kdx,kdy=None,None


for i in range(m+2):
	a[0].append("#")
for i in range(1,n+1):
	tam=input()
	a[i].append("#")
	for j in range(len(tam)):
		a[i].append(tam[j])
	a[i].append("#")
for i in range(m+2):
	a[n+1].append("#")

n=n+2
m=m+2

for i in range(n):
	for j in range(m):
		if a[i][j] == "A":
			kdx=i
			kdy=j
		tam=Diem(i,j,"None",0,0)	
		luutru[i].append(tam)	

khoitao=luutru[kdx][kdy]
luutru[kdx][kdy].check=1

deque=Deque()
deque.add(khoitao)

while deque.rong() != "NV":
	tam=deque.pop()
	deque.remove()
	x=tam.diem[0]
	y=tam.diem[1]
	if a[x][y]=="B":
		print("YES")
		print(luutru[x][y].duongdi)
		pa=[]
		while luutru[x][y].parent != "None":
			pa.append(luutru[x][y].parent)
			if luutru[x][y].parent == "U":
				x=x+1
				y=y
				continue
			
			if luutru[x][y].parent == "D":
				x=x-1
				y=y
				continue

			if luutru[x][y].parent == "R":
				x=x
				y=y-1
				continue

			if luutru[x][y].parent == "L":
				x=x
				y=y+1
				continue

		for i in reversed(range(len(pa))):
			print(pa[i],end="")

		exit(0)

	if ktra(a[x][y-1]) == "Yes" and luutru[x][y-1].check == 0:
		luutru[x][y-1].check = 1
		luutru[x][y-1].duongdi = tam.duongdi + 1
		luutru[x][y-1].parent = "L"
		deque.add(luutru[x][y-1])

	if ktra(a[x][y+1]) == "Yes" and luutru[x][y+1].check == 0:
		luutru[x][y+1].check = 1
		luutru[x][y+1].duongdi = tam.duongdi + 1
		luutru[x][y+1].parent = "R"
		deque.add(luutru[x][y+1])

	if ktra(a[x-1][y]) == "Yes" and luutru[x-1][y].check == 0:
		luutru[x-1][y].check = 1
		luutru[x-1][y].duongdi = tam.duongdi + 1
		luutru[x-1][y].parent = "U"
		deque.add(luutru[x-1][y])

	if ktra(a[x+1][y]) == "Yes" and luutru[x+1][y].check == 0:
		luutru[x+1][y].check = 1
		luutru[x+1][y].duongdi = tam.duongdi + 1
		luutru[x+1][y].parent = "D"
		deque.add(luutru[x+1][y])

print("NO")




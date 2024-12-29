from collections import defaultdict 
import sys

sys.stdin = open('BFS.INP','r')
sys.stdout = open('BFS.OUT','w')

a=defaultdict(list)

class Node:
	def __init__(self, name, check, duongdi):
		self.name=name
		self.check=check
		self.duongdi=duongdi

class Deque:
	def __init__(self):
		self.xuli=[]
	def add(self,node):
		self.xuli.append(node)
	def remove(self):
		self.xuli=self.xuli[1:]
	def pop(self):
		return self.xuli[0]
	def rong(self):
		if len(self.xuli) == 0:
			return "NV"

n,m=[int(x) for x in input().split()]

luutru=[]

for i in range(n):
	luutru.append(Node(i+1,0,0))

for i in range(m):
	u,v = [int(x) for x in input().split()]
	a[luutru[u-1]].append(luutru[v-1])
	a[luutru[v-1]].append(luutru[u-1])


deque=Deque()	
xuatphat=luutru[0]
luutru[0].check=1
deque.add(xuatphat)

while deque.rong() != "NV":
	tam = deque.pop()
	deque.remove()
	for i in range(len(a[tam])):
		if a[tam][i].check == 0:
			a[tam][i].check = 1
			deque.add(a[tam][i])
			a[tam][i].duongdi=tam.duongdi+1

for i in range(1,n):
	if luutru[i].duongdi == 0:
		print(-1)
	else:
		print(luutru[i].duongdi)

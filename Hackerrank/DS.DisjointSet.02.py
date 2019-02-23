# https://www.hackerrank.com/challenges/merging-communities/problem
# OK
par = {}
rank = {}
length = {}


def make_set(x):
    rank[x] = 0
    par[x] = x
    length[x] = 1


def find_set(x):
    if x != par[x]:
        par[x] = find_set(par[x])
    return par[x]


def link(x, y):
    if x != y:
        if rank[x] > rank[y]:
            par[y] = x
            length[x] += length[y]
        else:
            par[x] = y
            length[y] += length[x]
            if rank[x] == rank[y]:
                rank[y] += 1


def union(x, y):
    link(find_set(x), find_set(y))


arr = input().split(' ')
n = int(arr[0])
q = int(arr[1])
for i in range(n + 2):
    make_set(i)
while q > 0:
    arr = input().split(' ')
    if len(arr) == 2:
        x = int(arr[1])
        print(length[find_set(x)])
    else:
        x = int(arr[1])
        y = int(arr[2])
        union(x, y)
    # print(length)
    q -= 1

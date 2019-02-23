# Problems details: https://www.hackerrank.com/challenges/components-in-graph/problem
# OK
parent = dict({})
rank = dict({})


def makeset(x):
    rank[x] = 0
    parent[x] = x


def findset(x):
    if x != parent[x]:
        parent[x] = findset(parent[x])
    return parent[x]


def link(x, y):
    if x != y:
        if rank[x] > rank[y]:
            parent[y] = x
        else:
            parent[x] = y
            if rank[x] == rank[y]:
                rank[y] += 1


def union(x, y):
    link(findset(x), findset(y))


n = int(input())
while n > 0:
    arr = input().split(' ')
    a = int(arr[0])
    b = int(arr[1])
    if a not in parent.keys():
        makeset(a)
    if b not in parent.keys():
        makeset(b)
    union(a, b)
    n -= 1

new_dict = {}
for k, v in sorted(parent.items()):
    new_dict.setdefault(findset(v), []).append(k)
ans1 = 30003
ans2 = -1
# print(new_dict)
# print(parent)
for k, v in new_dict.items():
    if len(v) < ans1:
        ans1 = len(v)
    if len(v) > ans2:
        ans2 = len(v)
print('{} {}'.format(ans1, ans2))

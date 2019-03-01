# https://www.hackerrank.com/challenges/qheap1/problem
def left(i):
    return 2 * i


def right(i):
    return 2 * i + 1


def parent(i):
    return i // 2


def min_heapify(A, i):
    l = left(i)
    r = right(i)
    if l < len(A) and A[l] < A[i]:
        smallest = l
    else:
        smallest = i
    if r < len(A) and A[r] < A[smallest]:
        smallest = r
    if smallest != i:
        A[smallest], A[i] = A[i], A[smallest]
        min_heapify(A, smallest)


def heap_decrease_key(A, i, key):
    if key < A[i]:
        return
    A[i] = key
    while i > 1 and A[parent(i)] > A[i]:
        A[i], A[parent(i)] = A[parent(i)], A[i]
        i = parent(i)


def min_heap_insert(A, key):
    A.append(-1 * 1e9)
    heap_decrease_key(A, len(A) - 1, key)


def min_heap_delete(A, key):
    idx = A.index(key)
    A[len(A) - 1], A[idx] = A[idx], A[len(A) - 1]
    A.pop()
    min_heapify(A, idx)


A = ['*']
n = int(input())
for _ in range(n):
    i_list = list(map(int, input().split()))
    if len(i_list) == 1:
        print(A[1])
    else:
        if i_list[0] == 1:
            min_heap_insert(A, i_list[1])
        else:
            min_heap_delete(A, i_list[1])

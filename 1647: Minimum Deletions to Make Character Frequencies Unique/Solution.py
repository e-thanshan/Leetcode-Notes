def minDeletions(s: str) -> int:
    arr = [0 for i in range(26)]
    remove = 0
    for i in s:
        arr[ord(i) - 97] += 1

    arr.sort(reverse=True)
    arr = [i for i in arr if i != 0]

    for i in range(1, len(arr)):
        while arr[i] >= arr[i - 1] and arr[i] != 0:
            arr[i] -= 1
            remove += 1

    return remove

# Testcases
test1 = "aab"
test2 = "aaabbbcc"
test3 = "ceabaacb"

print(minDeletions(test1))
print(minDeletions(test2))
print(minDeletions(test3))
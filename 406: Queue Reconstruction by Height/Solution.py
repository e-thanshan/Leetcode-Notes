from typing import List

def reconstructQueue(people: List[List[int]]) -> List[List[int]]:
    output = []

    people.sort(key=lambda x: (-x[0], x[1]))
    for i in people:
        output.insert(i[1], i)

    return output

 #Credit to constantine786 for this solution

 # Testcases

test1 = [[7,0],[4,4],[7,1],[5,0],[6,1],[5,2]]
test2 = [[6,0],[5,0],[4,0],[3,2],[2,2],[1,4]]

print(reconstructQueue(test1))
print(reconstructQueue(test2))
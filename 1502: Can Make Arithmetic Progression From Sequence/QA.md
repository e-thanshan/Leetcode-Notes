# 1502: Can Make Arithmetic Progression From Sequence

### Question:
<details>
    <summary>Details</summary>

    A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

    Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

    Example 1:

    Input: arr = [3,5,1]
    Output: true
    Explanation: We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.

    Example 2:

    Input: arr = [1,2,4]
    Output: false
    Explanation: There is no way to reorder the elements to obtain an arithmetic progression.

    Constraints:

    2 <= arr.length <= 1000
    -106 <= arr[i] <= 106
</details>

###Answer:
<details>
    <summary>Details</summary>
    
    Sort array using qsort
    Find the difference between the first two elements, set that value to "diff"
    Go through the array, finding the difference between every pair of adjacent values and comparing them to "diff"
    Upon finding any difference, return false
    
</details>
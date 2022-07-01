# 1689: Partitioning Into Minimum Number of Deci-Binary Numbers

### Question:
<details>
    <summary>Details</summary>

    A decimal number is called deci-binary if each of its digits is either 0 or 1 without any leading zeros. For example, 101 and 1100 are deci-binary, while 112 and 3001 are not.
    Given a string n that represents a positive decimal integer, return the minimum number of positive deci-binary numbers needed so that they sum up to n.

    Example 1: 
    Input: n = "32"
    Output: 3
    Explanation: 10 + 11 + 11 = 32
    
    Example 2:
    Input: n = "82734"
    Output: 8
    
    Example 3:
    Input: n = "27346209830709182346"
    Output: 9

    Constraints:
    1 <= n.length <= 105
    n consists of only digits.
    n does not contain any leading zeros and represents a positive integer.
</details>

### Answer:
<details>
    <summary>Details</summary>
    
    The solution is simply to find the greatest number in the input. Here's why:
    
    Input: 82734
    This number can be split up like this:
       82734
    1. 11111
    2. 11111
    3. 10111
    4. 10101
    5. 10100
    6. 10100
    7. 10100
    8. 10000
    
    Where we subtract 1 from each place until it reaches 00000.
    Therefore, the solution will always be the greatest number in the input.
</details>

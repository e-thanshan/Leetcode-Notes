# 1647: Minimum Deletions to Make Character Frequencies Unique

### Question:
<details>
    <summary>Details</summary>
    
    A string s is called good if there are no two different characters in s that have the same frequency.
    Given a string s, return the minimum number of characters you need to delete to make s good.
    The frequency of a character in a string is the number of times it appears in the string. For example, in the string "aab", the frequency of 'a' is 2, while the frequency of 'b' is 1.

    Example 1:
    Input: s = "aab"
    Output: 0
    Explanation: s is already good.
    
    Example 2:
    Input: s = "aaabbbcc"
    Output: 2
    Explanation: You can delete two 'b's resulting in the good string "aaabcc".
    Another way it to delete one 'b' and one 'c' resulting in the good string "aaabbc".
    
    Example 3:
    Input: s = "ceabaacb"
    Output: 2
    Explanation: You can delete both 'c's resulting in the good string "eabaab".
    Note that we only care about characters that are still in the string at the end (i.e. frequency of 0 is ignored).

    Constraints:   
    1 <= s.length <= 105
    s contains only lowercase English letters.
</details>

### Answer:
<details>
    <summary>Details</summary>
    
    The solution will be split into 2 parts:
    1. Getting letter frequencies
        NOTE: This part is kind of inefficient, a hashmap will probably be better.
        
        We will make an array of size 26, and loop through the input string and add the frequency of each letter to its respective place.
        We will then sort it by descending order of frequency, and trim off the 0's from the array.
        
        Input: s = "ceabaacb"
               freq = [3, 2, 2, 0, 1, 0, 0, ...]
               freq (sorted) = [3, 2, 2, 1, 0, 0, ...]
               freq (sorted and trimmed) = [3, 2, 2, 1]
               
    2. Reduction until unique
        Initialize a variable, output = 0, to keep track of the number of deletions.
        Now, we will loop through the sorted + trimmed array starting from index 1, and for each value, we will compare it to the previous value and perform the following:
            While the current value is greater than or equal to the previous value AND the current value is not equal to 0 (preventing the values from going into the negatives)
                Reduce the current value by 1
                Increase the value of output by 1
                
        1. [3, 2, 2, 1]
               ^ 
             3 > 2
             
        2. [3, 2, 2, 1]
                  ^
                2 = 2, freq[2] -= 1, output += 1
                
        3. [3, 2, 1, 1]
                  ^
                2 > 1
                
        4. [3, 2, 1, 1]
                     ^
                   1 = 1, freq[3] -= 1, output += 1
                   
        5. [3, 2, 1, 0]
                     ^
                   1 > 0 
                
    Finally, return the value of output.
</details>
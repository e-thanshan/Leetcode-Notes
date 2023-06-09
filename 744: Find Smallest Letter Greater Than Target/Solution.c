//own solution
char nextGreatestLetter(char* letters, int lettersSize, char target) {
    char result = letters[0];
    int i = 0;
    while (i < lettersSize) {
        if (letters[i] - target > 0) {
            result = letters[i];
            break; 
        }
        i++;
    }
    return result;
}

//solution with binary search
char nextGreatestLetter2(char* letters, int lettersSize, char target) {
    if (letters[lettersSize - 1] <= target) {
        return letters[0];
    }

    int start = 0, end = lettersSize - 1;
    char result = letters[end];
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (letters[mid] > target) {
            if (result > letters[mid]) {
                result = letters[mid];
            }
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return result;
}

//least memory solution
char nextGreatestLetter3(char* letters, int lettersSize, char target) {
    char result = letters[0];

    for (int i = 0; i < lettersSize; i++) {
        if (letters[i] > target) {
            return letters[i];
        } 
    }
    return result;
}
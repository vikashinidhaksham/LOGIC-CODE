int lengthOfLastWord(char* s) {
    int y = strlen(s);
    int count = 0;
    for (int i = y - 1; i >= 0; i--) {
        if (isspace(s[i])) {
            if (count > 0) {
                break;
            }
        } else {
            count++;
        }
    }

    return count; 
    
}
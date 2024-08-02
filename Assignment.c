#include <stdio.h>
#include <string.h>
#include <limits.h>

#define NO_OF_CHARS 256

char firstNonRepeatingChar(char *str) {
    int count[NO_OF_CHARS] = {0};  
	int index[NO_OF_CHARS];        
    int len = strlen(str);
     int i;
    
    for (i = 0; i < NO_OF_CHARS; i++) {
        index[i] = INT_MAX;
    }

    
    for (i = 0; i < len; i++) {
        count[(int)str[i]]++;
        if (count[(int)str[i]] == 1) {
            index[(int)str[i]] = i;  
        } else {
            index[(int)str[i]] = INT_MAX;  
        }
    }

    
    int min_index = INT_MAX;
    for (i = 0; i < NO_OF_CHARS; i++) {
        if (count[i] == 1 && index[i] < min_index) {
            min_index = index[i];
        }
    }

    
    return (min_index == INT_MAX) ? '\0' : str[min_index];
}

int main()
 {
	char str[100];
	printf("ENTER YOUR STRING:\n");
    scanf("%s",str);
    
    char result = firstNonRepeatingChar(str);

    if (result != '\0') {
        printf("The first non-repeating character in '%s' is '%c'.\n", str, result);
    } else {
        printf("No non-repeating character found in '%s'.\n", str);
    }

    return 0;
}


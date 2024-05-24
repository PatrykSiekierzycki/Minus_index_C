#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char neg_ind(char* str, signed long long int index);

int main()
{
    // How to use the function.
    char result = neg_ind("hello friend", -5);
    printf("%c", result);
    return 0;
}


// Brief: function gets string and negative number and return the character from the string counting from end of string.
char neg_ind(char* str, signed long long int index)
{
    // Protection before positive number or zero.
    if (index >= 0)
    {
        return 0;
    }
    unsigned long long int length = (unsigned long long int) strlen(str);  // Get size of string.
    unsigned long long int ind = length + index;  // Calculate proper index value.
    char result = str[ind];  // Get proper char.
    return result;
}

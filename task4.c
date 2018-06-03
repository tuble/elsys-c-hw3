#include <stdio.h>
#include <string.h>

char to_lowercase(char);
char to_uppercase(char);
char invert(char);

int main() {

    char a[] = "UPPERCASElowercase";

    for(int i = 0; i < strlen(a); i++)
    {
        printf("%c", invert(a[i]));
        //printf("%c", to_uppercase(a[i]));
        //printf("%c", to_lowercase(a[i]));
    }
    
    return 0;
}

char to_lowercase(char c) {
    
    if(c >= 97 && c <= 122)
        return c;

    return c | 32;
}

char to_uppercase(char c) {

    if(c >= 65 && c <= 90)
        return c;

    return c ^ 32;
}

char invert(char c) {

    if(c >= 97 && c <= 122)
        return to_uppercase(c);
    else if(c >= 65 && c <= 90)
        return to_lowercase(c);

    return c;
}

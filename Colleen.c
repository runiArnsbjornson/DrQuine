#include <stdio.h>

/*
    This is a comment
*/

char *fun() {
    return "prout";
}

int main() {
    char *s = "#include <stdio.h>%c%c%c%c%c    This is a comment%c%c%c%c%cchar *fun() {%c    return %cprout%c;%c}%c%cint main() {%c    char *s = %c%s%c;%c    %c%c%c        Here is another one%c    %c%c%c    fun();%c    printf(s, 10, 10, 47, 42, 10, 10, 42, 47, 10, 10, 10, 34, 34, 10, 10, 10, 10, 34, s, 34, 10, 47, 42, 10, 10, 42, 47, 10, 10, 10, 10, 10, 10);%c    return 0;%c}%c";
    /*
        Here is another one
    */
    fun();
    printf(s, 10, 10, 47, 42, 10, 10, 42, 47, 10, 10, 10, 34, 34, 10, 10, 10, 10, 34, s, 34, 10, 47, 42, 10, 10, 42, 47, 10, 10, 10, 10, 10, 10);
    return 0;
}

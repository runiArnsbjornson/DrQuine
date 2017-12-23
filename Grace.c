#include <stdio.h>
#define not_a_main main
#define terminate return
#define DQ '"'

// This is yet another comment

int not_a_main() {
    void *kid = fopen("./Grace_kid.c", "w");
    char *s = "#include <stdio.h>%c#define not_a_main main%c#define terminate return%c#define DQ %c%c%c%c%c%c%c This is yet another comment%c%cint not_a_main() {%c    void *kid = fopen(%c./Grace_kid.c%c, %cw%c);%c    char *s = %c%s%c;%c    fprintf(kid, s, 10, 10, 10, 39, DQ, 39, 10, 10, 47, 47, 10, 10, 10, DQ, DQ, DQ, DQ, 10, DQ, s, DQ, 10, 10, 10, 10);%c    terminate 0;%c}";
    fprintf(kid, s, 10, 10, 10, 39, DQ, 39, 10, 10, 47, 47, 10, 10, 10, DQ, DQ, DQ, DQ, 10, DQ, s, DQ, 10, 10, 10, 10);
    terminate 0;
}
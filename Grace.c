#include <stdio.h>
#define terminate return
#define DQ '"'
#define not_a_main int main() {void *kid = fopen("./Grace_kid.c", "w");char *s = "#include <stdio.h>%c#define terminate return%c#define DQ %c%c%c%c#define not_a_main int main() {void *kid = fopen(%c./Grace_kid.c%c, %cw%c);char *s = %c%s%c;fprintf(kid, s, 10, 10, 39, DQ, 39, 10, DQ, DQ, DQ, DQ, DQ, s, DQ, 10, 10, 47, 42, 10, 10, 42, 47, 10, 10);terminate 0;}%c%c%c%c%c    This is yet another comment%c%c%c%c%cnot_a_main";fprintf(kid, s, 10, 10, 39, DQ, 39, 10, DQ, DQ, DQ, DQ, DQ, s, DQ, 10, 10, 47, 42, 10, 10, 42, 47, 10, 10);terminate 0;}

/*
    This is yet another comment
*/

not_a_main
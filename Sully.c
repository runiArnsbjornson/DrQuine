#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define HT "    "

int main() {
    int i = 5;
    if (strcmp(__FILE__, "Sully.c") != 0)
        i--;
    char path[128];
    char comp[128];
    char exec[128];
    sprintf(path, "Sully_%d.c", i);
    sprintf(comp, "gcc -o Sully_%d Sully_%d.c", i, i);
    sprintf(exec, "./Sully_%d", i);
    void *clone = fopen(path, "w+");
    char *s = "#include <stdio.h>%1$c#include <string.h>%1$c#include <stdlib.h>%1$c#define HT %2$c%3$s%2$c%1$c%1$cint main() {%1$c%3$sint i = %4$d;%1$c%3$sif (strcmp(__FILE__, %2$cSully.c%2$c) != 0)%1$c%3$s%3$si--;%1$c%3$schar path[128];%1$c%3$schar comp[128];%1$c%3$schar exec[128];%1$c%3$ssprintf(path, %2$cSully_%5$cd.c%2$c, i);%1$c%3$ssprintf(comp, %2$cgcc -o Sully_%5$cd Sully_%5$cd.c%2$c, i, i);%1$c%3$ssprintf(exec, %2$c./Sully_%5$cd%2$c, i);%1$c%3$svoid *clone = fopen(path, %2$cw+%2$c);%1$c%3$schar *s = %2$c%6$s%2$c;%1$c%3$sfprintf(clone, s, 10, 34, HT, i, 37, s);%1$c%3$sfclose(clone);%1$c%3$ssystem(comp);%1$c%3$sif (i > 0)%1$c%3$s%3$ssystem(exec);%1$c%3$sreturn 0;%1$c}%1$c";
    fprintf(clone, s, 10, 34, HT, i, 37, s);
    fclose(clone);
    system(comp);
    if (i > 0)
        system(exec);
    return 0;
}

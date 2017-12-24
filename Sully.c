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
    sprintf(path, "Sully_%d.c", i);
    sprintf(comp, "gcc -o Sully_%d Sully_%d.c ; ./Sully_%d", i, i, i);
    void *clone = fopen(path, "w+");
    char *s = "#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%c#define HT %c%s%c%c%cint main() {%c%sint i = %d;%c%sif (strcmp(__FILE__, %cSully.c%c) != 0)%c%s%si--;%c%schar path[128];%c%schar comp[128];%c%ssprintf(path, %cSully_%cd.c%c, i);%c%ssprintf(comp, %cgcc -o Sully_%cd Sully_%cd.c ; ./Sully_%cd%c, i, i, i);%c%svoid *clone = fopen(path, %cw+%c);%c%schar *s = %c%s%c;%c%sfprintf(clone, s, 10, 10, 10, 34, HT, 34, 10, 10, 10, HT, i, 10, HT, 34, 34, 10, HT, HT, 10, HT, 10, HT, 10, HT, 34, 37, 34, 10, HT, 34, 37, 37, 37, 34, 10, HT, 34, 34, 10, HT, 34, s, 34, 10, HT, 10, HT, 10, HT, 10, HT, HT, 10, HT, 10, 10);%c%sfclose(clone);%c%sif (i != 0)%c%s%ssystem(comp);%c%sreturn 0;%c}%c";
    fprintf(clone, s, 10, 10, 10, 34, HT, 34, 10, 10, 10, HT, i, 10, HT, 34, 34, 10, HT, HT, 10, HT, 10, HT, 10, HT, 34, 37, 34, 10, HT, 34, 37, 37, 37, 34, 10, HT, 34, 34, 10, HT, 34, s, 34, 10, HT, 10, HT, 10, HT, 10, HT, HT, 10, HT, 10, 10);
    fclose(clone);
    if (i != 0)
        system(comp);
    return 0;
}

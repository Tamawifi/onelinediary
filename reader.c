#include <stdio.h>

int main (void) {
    FILE *fp;
    char diary2[60];
    char date2[8];
    printf("Please input the date you want to see (example:20200218) : ");
    scanf("%s", date2);
    fp = fopen(date2, "r");
    if (fp==NULL) {
        printf("There isn't diary on that day.\n");
        return 0;
    }
    fscanf(fp, "%s", &diary2);
    printf("%s", diary2);
    return 0;
}

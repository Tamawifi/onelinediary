#include <stdio.h>

int main (void) {
    FILE *fp;
    char diary1[60];
    char date1[8];
    printf("Please input today's date (example:20200218): ");
    scanf("%s", date1);
    fp = fopen(date1, "w");
    printf("Please input today's one-line diary (max:60 characters)\n don't use space, please use underbar(_) \ninput > ");
    scanf("%s", diary1);
    fputs(diary1, fp);
    fclose(fp);
    return 0;
}

#include <stdio.h>

void main() {
    FILE *fp;
    int val;
    fp=fopen("files/file.txt", "rb");
    if (fp!=NULL) {
        while (!feof(fp)) {
            val=fgetc(fp);
            printf("%c", val);
        }
    }   
    else 
        printf("Errore nell'apertura del file\n");
}
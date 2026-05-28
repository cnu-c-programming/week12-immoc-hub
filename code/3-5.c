#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    int sum = 0;
    char line[128];

    while (fgets(line,sizeof line, fp)!=0){
        int num;
        if (sscanf(line,"%d",&num)!=1){
            fprintf(stderr,"invalid input %s", line);

        }
        else 
            sum+=num;
    }

    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}

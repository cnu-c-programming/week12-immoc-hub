#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 2)
        return 0;

    FILE* fp = fopen(argv[1], "r");

    int count[26] ={0};
    char line[128];
    while(fgets(line,sizeof line, fp)!=0){

        for (int i=0;line[i]!='\0';i++){
            int index = line[i]-'a';
            if (0<=index&&index<=25){
                count[index]++;
            }
        }
    }

    for (int i=0;i<26;i++){
        printf("%c: %d\n",i+'a',count[i]);
    }

    fclose(fp);
}


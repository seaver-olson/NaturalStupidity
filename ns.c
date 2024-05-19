#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void answer(char question[]);

int main(){
        char question[100];

        printf("Ask me a question: ");
        scanf("%s", question);
        if (strcmp(question, "") != 0){
            answer(question);
        }
        else{
            printf("Please ask a question\n");
        }

    return 0;
}

void answer(char question[]){
    char answer[100];
    FILE *file = fopen("answer.txt", "r");
    if (file == NULL){
        printf("Error opening file\n");
        exit(1);
    }
 
    while (fscanf(file, "%s", answer) != EOF){
        for (int i = 0; i < strlen(answer); i++){
            printf("%c", answer[i]);
        }
        printf("\n");
    }
    fclose(file);
}

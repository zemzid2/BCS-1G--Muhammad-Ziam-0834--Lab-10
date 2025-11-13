#include<stdio.h>
#include<string.h>
int main (){
char word[4][10]={
"APPLES",
"GRAPES",
"BANANA",
"ORANGES"
};
int i,j;
for(i=0;i<4;i++){
printf("WORD: %s     LENGHT: %d\n", word[i] ,strlen(word[i]));
}
strcpy(word[1],"Mango");
printf("\n");
for(i=0;i<4;i++){
printf("WORD: %s     LENGHT: %d\n", word[i] ,strlen(word[i]));
}
printf("\nWords printed vertically:\n");
    for (i = 0; i < 4; i++) {
   
        printf("\n%s vertically:\n", word[i]);
        for (j = 0; j < strlen(word[i]); j++) {
            printf("%c\n", word[i][j]);
        }
    }
return 0;
}

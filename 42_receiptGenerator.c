#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord){
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(strstr(&str[i], oldWord) == &str[i]){
            count++;
            i = i + oldWordLength - 1;
        }
    }
    resultString = (char *) malloc(i + count * (newWordLength - oldWordLength) + 1);
    i = 0;
    while (*str)
    {
        if(strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else {
            resultString[i] = *str;
            i += 1;
            str += 1;         
        }
    }
   resultString[i] = '\0';
   return resultString; 

}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("42_bill.txt", "r");
    ptr2 = fopen("42_genBill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The bill template was: %s\n",str);
    
    char *newStr;
    newStr = replaceWord(str, "{{item", "shoes");
    newStr = replaceWord(newStr, "{{outlet}}", "Ram Store");
    newStr = replaceWord(newStr, "{{name}}", "Vivek");
    printf("The actual bill is: %s\n",newStr);
    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}
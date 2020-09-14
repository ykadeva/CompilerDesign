/*Q2.) Design and Code using C programming language, a deterministic finite automata 
        which accept a string containing “the” anywhere in a string of {a-z}, 
        e.g., “there” but not “those”.*/

#include <stdio.h>
#include<string.h>

//Function to check "the" Substring...
int checkThe(char *stt,int len){
    for(int i=2;i<len;i++){
        if(stt[i-2]=='t'&&stt[i-1]=='h'&&stt[i]=='e'){
            return 1;
        }
    }
    return 0;
}



int main()
{
   char stt[999];
   scanf("%s",stt);
   int len = strlen(stt);
   
   if(checkThe(stt,len)){
        printf("'the' present \n");
   }else
        printf("'the' not present\n");
   
    return 0;
}

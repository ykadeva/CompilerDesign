/*Q1.) Design and Code using C programming language, FA with ∑ = {0, 1} 
    a.) that accepts the set of all strings with three consecutive 0's.
    b.) that contains the substring '101'
    c.) that contains no. of zeroes divisible by 2 and no. of ones divisible by 3.*/

#include <stdio.h>
#include<string.h>

//Function to check three consecutive 0's.
int check3zero(char *stt,int len){ 
    int i=0,temp=0;
    for(i=0;i<len;i++){
        if(stt[i]=='0'){
                temp++;
               }else if(stt[i]=='1'){
                   temp=0;
               }
        if(temp>=3){
            return 1;
        } 
    }
return 0;
}

//Function to check substring '101'
int check101(char *stt,int len){
    int i;
    for(i=2;i<len;i++){
        if(stt[i-2]=='1' && stt[i-1]=='0' && stt[i]=='1'){
              return 1;  
        }
    }
return 0;
}

/*Function to check that string contains no. of zeroes divisible by 2 and no. of ones divisible by 3.*/
int div0213(char *stt,int len){
    int i,i1=0,i0=0;
    for(i=0;i<len;i++){
        if(stt[i]=='1'){
            i1++;
        }else if(stt[i]=='0'){
            i0++;
        }
    }
    if(i1%3==0 && i0%2==0){
        return 1;
    }else
        return 0;
}
int main()
{
   char stt[999];
   scanf("%s",stt);
   int len = strlen(stt);
   
   if(check3zero(stt,len)){
        printf("Three consecutive 0's \n");
   }
   if(check101(stt,len)){
        printf("Substring 101 found \n");
   }
    if(div0213(stt,len)){
        printf("String contains no. of zeroes divisible by 2 and no. of ones divisible by 3 \n");
    }
   
    return 0;
}

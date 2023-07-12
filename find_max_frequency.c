#include<stdio.h>
#include<string.h>
int main(){
    char ch[100] = "test string!", count = 0, count2, max_count = 0, max_c;
    
    for (int i = 0; i < strlen(ch); i++){
        //printf("%c\n", ch[i]);
        for(int j = 0; j < strlen(ch); j++){
            //printf("%c\n", ch[j]);
            if(ch[i] == ch[j]){
                count++;
                //printf("%d\n", count);
            }
        }
        
        if( count > max_count ){
            //printf("%d",count);
            max_count = count;
            max_c = ch[i];
            count = 0;
            //printf("%c\n", ch[i]);
        }else{
            count = 0;
        }
    }
    
    printf("%c have the max count of %d\n", max_c, max_count);
    return 0;
    
}
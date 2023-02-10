#include <stdio.h>
#include <string.h>
#include <ctype.h>
int kiemtra(char Mk[]){
    int demso=0,demthg=0,demhoa=0,demkitu=0;
    for(int i=0;i<strlen(Mk);i++){
        if(strlen(Mk)<=6)
        return 0;
        if(Mk[i]>='a' && Mk[i]<='z')
            demthg++;
        else if(Mk[i]>='A' && Mk[i]<='Z')
            demhoa++;
        else if(Mk[i]>='0' && Mk[i]<='9')
            demso++;
        else
            demkitu++;

    }
    if(demhoa >0 && demkitu >0 && demso >0 && demthg >0)
        return 1;
    return 0;
}
int main(){
    char Mk[50];
    gets(Mk);
    printf("%d",kiemtra(Mk));
}

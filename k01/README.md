# 課題1 レポート

aa83988848 薗田光太郎

## 課題

標本男性の平均と分散を求めよ．また，「適当に選んだ」と言っても所詮聞く相手は周辺の同年代の同じ学部の友達に限定されそうである．周辺に住んでる同年代の工学部の男性の平均と分散を推定せよ．
   
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

extern double ave_online(double val,double ave)
extern double var_online()

int main(void)
{
    double val;
    char fname[FILENAME_MAX];
    char buf[256];
    FILE* fp;

    printf("input the filename of sample:");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    printf("the filename of sample: %s\n",fname);

    fp = fopen(fname,"r");
    if(fp==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }

    while(fgets(buf,sizeof(buf),fp) != NULL){
        sscanf(buf,"%lf",&val);

double ave_online(double val, double ave);
 {
     int a;
     double b;

     for(i=1,i<=14,i++){
         b=(i-1)/i*ave +1/i*val;
     }
     return b;
 }
 double var_online(double val, double ave);
 {
     int j;
     double c;

     for(j=1,j<=14,j++){
         c=j-(1/j)*ave_online(val*val,ave)+(1/j)*val*val-aveonline(val,ave)*aveonline(val,ave)
     }
     return c;

 }
## ソースコードの説明

あいうえお

## 修正履歴

説明は「かきくけこ」だ！

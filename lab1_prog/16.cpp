#include "procedures.h"
void _16(int m,int **arr,int s1,int s2){
    int s;
    for(int i=0;i<m;i++){
        s=arr[s1][i];
        arr[s1][i]=arr[s2][i];
        arr[s2][i]=s;
    }
}
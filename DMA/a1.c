#include<stdio.h>
#include<stdlib.h>

int main(){
    int * fi;
    char * fc;
    float *ff;
    fi=(int *)malloc(sizeof(int));
    fc=(char *)malloc(sizeof(char));
    ff=(float *)malloc(sizeof(float));
    if(fi== NULL||fc==NULL||ff==NULL ){
        printf("memoray allocation is failed");
        return 1;
    }
    *fi= 28;
    *fc= 'H';
    *ff= 384.57;
    printf("%d ",*fi);
    printf("%c ",*fc);
    printf("%f ",*ff);
    free(fi);
    free(fc);
    free(ff);
}
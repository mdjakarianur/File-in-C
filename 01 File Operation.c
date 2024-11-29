#include<stdio.h>
int main(){
 FILE *fp;
 char filename[]="my_file.txt";
 
 fp=fopen(filename,"w");
 
 fprintf(fp,"We are learning file operations in c\n");
 fprintf(fp,"Hello People\n");
 
 fclose(fp);
 
 fp=fopen(filename,"a");
 
 fprintf(fp,"Hello World\n");
 return 0;
}

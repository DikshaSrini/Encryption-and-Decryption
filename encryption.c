#include<stdio.h>
#include<stdlib.h>

int main() {
char input_file[20],output_file [20], chr;
int num_ascii;
FILE *fd1,*fd2;
printf("\nEnter the name of the file to be encrypted: ");
scanf("%s", input_file);

printf("\nEnter the name of the output file: ");
scanf("%s", output_file);

fd1=fopen (input_file, "r");
if(fd1==NULL) {
printf("\nInput file does not exist...");
exit(0);
}else{
fd2=fopen(output_file, "w");
chr=fgetc (fd1);
while(chr!=EOF) {
num_ascii= (int) chr;
num_ascii=num_ascii+5;
fprintf(fd2, "%c",chr);
chr=fgetc (fd1);
}
fclose(fd2);
}
fclose(fd1);
printf("\nFile is encrypted with name %s.", output_file);
return 0;
}

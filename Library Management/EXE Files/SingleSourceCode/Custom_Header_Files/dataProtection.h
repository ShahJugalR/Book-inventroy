// All Copyrights reseved Jugal Shah 2020
// Source Code 7 : Data Decryption/Encryption
// Project Name : Lib Managemant Sys
// AU1940316
#include <stdio.h>
#include <stdlib.h>

int Decrypt(){
	FILE *fdr,*fdw;
	char ch,fileName[20],output[20];
	int op;
	printf("Enter file name to be read:");
	scanf("%s",fileName);
	
	printf("Enter the name of output file:");
	scanf("%s",output);
	
	fdr=fopen(fileName,"r");
	fdw=fopen(output,"w");
	
	if(fdr==NULL){
		printf("\nFile does not exist...!\n");
		exit(0);
	}
	ch=fgetc(fdr);
	while(ch!=EOF){
		op=(int)ch;
		op=op-5;
		fprintf(fdw,"%c",op);
		ch=fgetc(fdr);
	}
	fclose(fdw);
	fclose(fdr);
	
	printf("File is decrypted with name %s.\n",output);
	return 0;
}

int Encrypt(){
	FILE *fdr,*fdw;
	char ch,fileName[20],output[20];
	int op;
	printf("Enter file name to be read:");
	scanf("%s",fileName);

	printf("Enter the name of output file:");
	scanf("%s",output);
	
	fdr=fopen(fileName,"r");
	fdw=fopen(output,"w");
	
	if(fdr==NULL){
		printf("\nFile does not exist...!\n");
		exit(0);
	}
	ch=fgetc(fdr);
	while(ch!=EOF){
		op=(int)ch;
		op=op+5;
		fprintf(fdw,"%c",op);
		ch=fgetc(fdr);
	}
	fclose(fdw);
	fclose(fdr);
	printf("Encrypted file %s is created..\n",output);
	return 0;
}


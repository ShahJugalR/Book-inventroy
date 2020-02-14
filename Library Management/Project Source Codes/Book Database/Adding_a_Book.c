
// All Copyrights reseved Jugal Shah 2020
// Source Code 3 : Add a book
// Project Name : Lib Managemant Sys
// AU1940316

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

    main()
        {
        	FILE *BooksDataBase;
        	
        	int i,j=0;
        	char Book_Name[30],Author_Name[30],Time_Tag[50],ISBN_Code[50];
        	char Book_slot[150]="";
        	//printf("Spaces Not Allowed \n");
        	
        	printf("Add Name Of the Book : ");
        	gets(Book_Name);
        	printf("\nAdd Name of the Author : ");
        	gets(Author_Name);
        	printf("Enter the ISBN Code of Book");
        	gets(ISBN_Code);
        	
          strcat(Book_slot,Book_Name);
       	  strcat(Book_slot,":");
       	  strcat(Book_slot,Author_Name);
       	  strcat(Book_slot,":");
       	  strcat(Book_slot,ISBN_Code);
       	  strcat(Book_slot,"\n");
       	  
       	    BooksDataBase = fopen("Books_Database.dat","a");
        	fprintf(BooksDataBase,Book_slot);
        	fclose(BooksDataBase);
        	
        	
        	        	
        	
		}

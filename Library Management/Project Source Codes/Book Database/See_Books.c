
// All Copyrights reseved Jugal Shah 2020
// Source Code 4 : See Books
// Project Name : Lib Managemant Sys

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>


   main()
      {
      	// defining Variables
      	FILE *Book_list;
      	char ch;
      	int i=0;
        int No_of_Books = -1;
      	// defining Variables-End
      	
      	// Main Prog
      	Book_list = fopen("Books_Database.dat","r");
      	ch = fgetc(Book_list);
      	
      	if (Book_list==NULL)
      	   {
      	   	  printf("Corrupt Database "); //Detects if Data File Missing
      	   	  
      	   	  Sleep(2000);
			 }
		else if(ch==EOF)
	       {
	       	printf("No Books Yet Added  or Database Corrupt");   //Detects if someone
	       	getch();                      //try to Damage Data File
		   }
      	else
      	 {
		   
		  while(ch != EOF)
      	   {
      	   	printf("%c",ch);
      	   	if (ch=='\n')
      	   	  {
      	   	  	No_of_Books++;
				   }
      	   	ch = fgetc(Book_list);
			 }
			 printf("\n\n %d Book(s) in Library",No_of_Books);
		}
		getch();
		    fclose(Book_list);
		    
			 
	    
      	
      	
      	
      	
      	// Main Prog -End
	  }

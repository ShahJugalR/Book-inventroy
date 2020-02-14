// All Copyrights reseved Jugal Shah 2020
// Project Name : Lib Managemant Sys
// AU1940316

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

void See_Books_List()
      {
      	// defining Variables
      	FILE *Book_list;
      	char ch;
      	int i=0;
        int No_of_Books = -1;
      	// defining Variables-End
      	
      	// Main Prog
      	Book_list = fopen("BookDatabase.dat","r");
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
void AddBook()
   {
   	   FILE *BookDatabase;
   	   
   	   int ISBN_Code;
   	   char Book_name[50],Author_name[50];
   	   
   	   BookDatabase = fopen("BookDatabase.dat","a");
   	   printf("Name of the Book name : ");
   	   scanf("%s",Book_name);
   	   printf("Whats the Author name : ");
   	   scanf("%s",&Author_name);
   	   printf("enter the Acccount ID : ");
   	   scanf("%d",&ISBN_Code);
   	   
   	   fprintf(BookDatabase,"\n#%d:%s \n%s",ISBN_Code,Book_name,Author_name);
   	   
   	   fclose(BookDatabase);
   	   printf("Added Successfully ");
   }
void DeleteBook()
   { 
   	   FILE *BookDatabaseOld,*BookDatabaseNew;
   	   
   	   int ISBN_Code;
   	   char Book_name[50],Entered_Book_name[50],Author_name[50];
   	   
   	   BookDatabaseOld = fopen("BookDatabase.dat","r");
   	   BookDatabaseNew = fopen("temp.dat","a");
   	   
   	   printf("Name of the Book name : ");
   	   scanf("%s",Entered_Book_name);
   	   while(1)
   	      {
   	   if(fscanf(BookDatabaseOld,"\n#%d:%s\n%s",&ISBN_Code,&Book_name,&Author_name)==EOF)
   	       {
   	       	  break;
   	       }
   	   else
   	       {     if(strcmp(Entered_Book_name,Book_name)==0)
   	             {
   	          	
   	             }
   	              else{
   	          
   	       	       fprintf(BookDatabaseNew,"\n#%d:%s\n%s",ISBN_Code,Book_name,Author_name);
   	              }
   	       }
   	      }
   	   fclose(BookDatabaseNew);
   	   fclose(BookDatabaseOld);
   	   system("del BookDatabase.dat");
   	   system("ren temp.dat BookDatabase.dat");
   	   printf("Updated Successfully ");
   	   
   }
void SearchBook()
   {
   	 FILE *BookDatabase;
   	   
   	   int ISBN_Code;
   	   char Bookname[50],Entered_Bookname[50],Author_Name[50];
   	   
   	   BookDatabase = fopen("BookDatabase.dat","r");
   	   
   	   
   	   printf("Name of the Bookname : ");
   	   scanf("%s",Entered_Bookname);
   	   while(1)
   	      {
   	   if(fscanf(BookDatabase,"\n#%d:%s\n%s",&ISBN_Code,&Bookname,&Author_Name)==EOF)
   	       {
   	       	  break;
   	       }
   	   else
   	       {     if(strcmp(Entered_Bookname,Bookname)==0)
   	             {
   	          	    printf("\nISBN Code: #%d\nBook Name : %s\nWritten By : %s",ISBN_Code,Bookname,Author_Name);
   	             }
   	              else{
   	          
   	       	       
   	              }
   	       }
   	      }
   	   fclose(BookDatabase);
   	   
   }
void UpdateBookDetails()
   {
  	  FILE *BookDatabaseOld,*BookDatabaseNew;
   	   
   	   int ISBN,Entered_ISBN;
   	   char Userid[50],Entered_Userid[50],Entered_initialbalance[50],initialbalance[50];
   	   
   	   BookDatabaseOld = fopen("BookDataBase.dat","r");
   	   BookDatabaseNew = fopen("temp.dat","a");
   	   
   	   printf("enter the Book ISBN: ");
   	   scanf("%d",&Entered_ISBN);
   	   printf("Name of theBook : ");
   	   scanf("%s",Entered_Userid);
   	   printf("Whats the Author Name : ");
   	   scanf("%s",Entered_initialbalance);
   	   
   	   while(1)
   	      {
   	   if(fscanf(BookDatabaseOld,"\n#%d:%s\n%s",&ISBN,&Userid,&initialbalance)==EOF)
   	       {
   	       	  break;
   	       }
   	   else
   	       {     if(Entered_ISBN-ISBN==0)
   	             {
   	          	    fprintf(BookDatabaseNew,"\n#%d:%s \n%s",Entered_ISBN,Entered_Userid,Entered_initialbalance);
   	             }
   	              else{
   	          
   	       	       fprintf(BookDatabaseNew,"\n#%d:%s \n%s",ISBN,Userid,initialbalance);
   	              }
   	       }
   	      }
   	   fclose(BookDatabaseNew);
   	   fclose(BookDatabaseOld);
   	   system("del BookDataBase.dat");
   	   system("ren temp.dat BookDataBase.dat");
   	   printf("Updated Successfully ");
   }
void CheckDatabase()
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
      	   	  MessageBox(0,"Database File Not Found ","DataBase Error",0); //Detects if Data File Missing
      	   	  
      	   	  //Sleep(2000);
      	   	  exit(0);
			 }
		if(ch==EOF)
	       {
	         	MessageBox(0,"Database File Corrupted or Blank","Database Error",0);   //Detects if someone
	       	    exit(0);                      //try to Damage Data File
		   }
	}
 

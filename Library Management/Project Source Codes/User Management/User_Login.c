
// All Copyrights reseved Jugal Shah 2020
// Source Code 1 :  Userlogin
// Project Name : Lib Managemant Sys
// AU1940316

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>


   main()
      {
      	// defining Variables
      	FILE *UserCredentials;
      	char Entered_Username[30],Entered_Password[30];
      	char Fetched_Username[30],Fetched_Password[30];
      	char ch;
      	int i=0;
      	int j=0;
      	// defining Variables-End
      	
      	// Main Prog
      	UserCredentials = fopen("Credentials.dat","r");
      	ch = fgetc(UserCredentials);
      	if(ch==EOF||ch==' ')
	       {
	       	printf("Database Corrupt");   //Detects if someone
	       	exit(0);                      //try to Damage Data File
		   }
      	if (UserCredentials==NULL)
      	   {
      	   	  printf("Corrupt Database "); //Detects if Data File Missing
      	   	  
      	   	  exit(0);
			 }
      	while(ch != EOF)
      	   {
      	   	if(ch == ',')
      	   	   {
      	   	   	break;
					}
			Fetched_Username[i] = ch;
      	   	i++;
      	   	ch = fgetc(UserCredentials);
      	   	
			 }
	
	
	    while(ch != EOF)
      	   {
      	   	if(ch != ',')
      	    {
			  Fetched_Password[j] = ch;
			  j++;
		    }     
      	   	
      	   	ch = fgetc(UserCredentials);
			 }
			 fclose(UserCredentials);
			 
	    
      	
      	while(1)	
		    {
      	printf("Enter Username : ");
      	scanf("%s",Entered_Username);
      	printf("Enter Password : ");
      	scanf("%s",Entered_Password);
      	
      	
		
			  
            if(strcmp(Entered_Password,Fetched_Password)==0 && strcmp(Entered_Username,Fetched_Username)==0)
               {
                   printf("\n\n\n");
            	   printf("\t\tCorrect Password ");
            	   printf("\t\tPress Any Key To Proceed");
            	   getch();
            	   
            	   exit(0);
			    }
			else
			    {
			    	printf("\n\n\n\t\tWarning : Dont Spam Wrong Credentials\n\n");
			    	//clrscr();  // This not Working
			    	Sleep(2000);
			    	system("cls"); // i used this as alternative
				}
      	   }
      	
      	
      	// Main Prog -End
	  }

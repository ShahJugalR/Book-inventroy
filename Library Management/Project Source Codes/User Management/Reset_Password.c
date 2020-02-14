// All Copyrights reseved Jugal Shah 2020
// Source Code 2 : Password Reset
// Project Name : Lib Managemant Sys
// AU1940316
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
     main()
       {
       	  FILE *UserCredentials;
       	  char NewPassword[50],NewUsername[50];
       	  char ch[100]="\0";
       	  printf("\n\n\nEnter The New Username: ");
       	  scanf("%s",NewUsername);
       	  printf("\n\n\nEnter The New Password: ");
       	  scanf("%s",NewPassword);
       	  
       	  
       	  strcat(ch,NewUsername);
       	  strcat(ch,",");
       	  strcat(ch,NewPassword);
       	  
       	  printf("%s",ch);
       	  
       	  UserCredentials = fopen("Credentials.dat","w");
       	  fprintf(UserCredentials,ch);
       	  fclose(UserCredentials);
       	  
       	  
       	  
       }

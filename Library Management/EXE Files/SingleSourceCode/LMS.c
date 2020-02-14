// All Copyrights reseved Jugal Shah 2020
// Project Name : Lib Managemant Sys
// AU1940316

#include "Custom_Header_Files/UserManagement.h"
#include "Custom_Header_Files/BookDatabase.h"
#include "Custom_Header_Files/dataProtection.h"

main()
{ 
   int num;
   User_Login();
 //Decrypt()
   while(1){
   
   printf("1.Add Book\n");
   printf("2.See List of All Books\n");
   printf("3.Search Particular Book\n");
   printf("4.Delete Book\n");
   printf("5.Update Book Details\n");
   printf("6.Update User Credentials\n");
   printf("7.Sign Out and  Exit \n");
   printf("Enter Your Choice From These\n");
   scanf("%d",&num);
        switch (num) {
            case 1:
                printf("Add Book");
                AddBook();
            case 2:
                printf("See List of All Books");
                See_Books_List();
            case 3:
                printf("Search Particular Book");
                SearchBook();
            case 4:
                printf("Delete Book");
                DeleteBook();
            case 5:
                printf("Update Book Details");
                UpdateBookDetails();
            case 6:
                printf("Update User Credentials");
                Reset_Credentials();
            case 7:
                printf("Sign Out and  Exit ");
                exit(0);
                //Encrypt()
            default:
                printf("Entered Response in Not a Valid One");
                break;
        }
        //Encrypt()
    }
}

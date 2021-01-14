
#include <stdio.h>
#include <string.h>

int main()
{
// First string
char myfirstString[27];
 for  (int i = 0; i < 26 ; i++)
 {
  myfirstString[i]= 'a' + i;
 }
   
  char * myStrP = myfirstString;
   

 for (int i= 0; i <26 ; i ++)
 {
  myfirstString[i] = myfirstString[i] - 32;
 }
   printf("Letters in the first string are %s\n", myStrP );


//Second String
char mysecondString[27] = "abcdefghijklmnopqrstuvwxyz"; 
 printf("Letters in the second string are %s\n ", mysecondString);
//Compare the two strings
if (strcmp( myStrP, mysecondString) == 0 )
 {
  printf("The strings are identical\n"); 
 }
else
 { 
  printf("The strings are different\n");
 }

// Third String
  char mythirdString[50];
  strcat(mythirdString, myStrP);
  strcat(mythirdString, mysecondString);
  printf("%s + %s = %s\n" , myStrP, mysecondString, mythirdString);

}






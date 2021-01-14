 #include <stdio.h>
#include <math.h> 
// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
 float areaofCircle (float radius)
{
   float area= radius* radius * M_PI;
   return area;
} 

 int main(int argc, char* argv[])
  
 { 
 while(1)
  { 
    float start;
    float end  ;
   printf(" lowest radius of range:\n");
   scanf("%f" , &start);
     
   if (start < 0)
  {
     printf("not valid\n");
     
  }

  printf("highest radius of range:\n");
  scanf("%f" , &end);
  if (start > end)
  { 
    printf(" not valid\n");
    
  }

int reps = (end + 1 - start);

float radius;
float result;
  
  
 
  
  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  // start and end rgc, char* argv[])
radius = start;

for (float i = start; i < (end +1) ; i++)
 {
  float result = areaofCircle(i);
  printf("the area of a circle with a radius of %f is %f\n", start+i, result);
 }
  break; 
}
}

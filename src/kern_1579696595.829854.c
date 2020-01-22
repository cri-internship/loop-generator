#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(950, "random");
	int *A = create_one_dim_int(630, "random");

	for (int d = 5; d < 626; d++)
	  for (int c = 5; c < 626; c++)
	    for (int b = 5; b < 626; b++)
	      for (int a = 5; a < 626; a++)
	      {
	        
	       A[a]=A[a-5]*0;
	        
	       B[a]=B[a+2]/16;
	        
	       A[a]=15;
	        
	       B[a]=A[a]/B[a];
	       A[a]=A[a+2]+B[a];
	        
	       int var_a=A[a]+10;
	       int var_b=A[a+3]*23;
	        
	       A[a]=A[a]/B[a];
	       A[a]=A[a-4]+B[a];
	      }

    return 0;
}
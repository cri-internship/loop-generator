#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(120, "random");
	int *B = create_one_dim_int(150, "random");

	for (int d = 4; d < 115; d++)
	  for (int c = 4; c < 115; c++)
	    for (int b = 4; b < 115; b++)
	      for (int a = 4; a < 115; a++)
	      {
	        
	       B[a]=B[a+2]-A[a];
	        
	       A[a]=A[a+5]*6;
	        
	       int var_a=A[a]-6;
	       A[a]=15;
	        
	       B[a]=11;
	      }

    return 0;
}
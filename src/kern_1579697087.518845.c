#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(550, "zeros");
	float *A = create_one_dim_float(450, "zeros");
	float **B = create_two_dim_float(10, 510, "zeros");

	for (int d = 0; d < 507; d++)
	  for (int c = 1; c < 5; c++)
	    for (int b = 1; b < 5; b++)
	      for (int a = 1; a < 5; a++)
	      {
	        
	       C[a]=C[a-1]+B[a][b]*A[a];
	        
	       B[a][b]=B[a+5][b+1]+C[a]-C[a];
	        
	       A[a]=A[a+4]+0.719;
	        
	       A[a]=B[a][b]/A[a];
	       B[a][b]=B[a+5][b+3]+C[a];
	      }

    return 0;
}
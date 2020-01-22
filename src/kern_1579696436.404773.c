#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(1000, "random");
	double *C = create_one_dim_double(430, "random");
	double *A = create_one_dim_double(100, "random");

	for (int d = 5; d < 98; d++)
	  for (int c = 5; c < 98; c++)
	    for (int b = 5; b < 98; b++)
	      for (int a = 5; a < 98; a++)
	      {
	        
	       B[a]=0.113;
	       float  var_a=B[a]+0.543;
	        
	       A[a]=A[a-2]-0.481;
	        
	       C[a]=C[a-5]*A[a];
	        
	       C[a]=C[a+4]-B[a]/B[a];
	        
	       A[a]=A[a+2]*C[a]+B[a];
	        
	       double var_b=C[a]+0.036;
	       double var_c=C[a+3]-0.543;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(620, "random");
	double *B = create_one_dim_double(740, "random");
	double **A = create_two_dim_double(140, 340, "random");

	for (int d = 5; d < 615; d++)
	  for (int c = 5; c < 615; c++)
	    for (int b = 5; b < 615; b++)
	      for (int a = 5; a < 615; a++)
	      {
	        
	       C[a]=C[a+3]+0.232;
	        
	       double var_a=C[a]*0.43;
	       double var_b=C[a+5]+0.239;
	        
	       A[a][b]=C[a]+0.939;
	       B[a]=C[a-5]*A[a][b]+0.539;
	      }

    return 0;
}
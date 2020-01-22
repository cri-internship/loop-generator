#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(840, "random");
	double **B = create_two_dim_double(990, 590, "random");
	double *C = create_one_dim_double(510, "random");

	for (int d = 3; d < 585; d++)
	  for (int c = 5; c < 505; c++)
	    for (int b = 5; b < 505; b++)
	      for (int a = 5; a < 505; a++)
	      {
	        
	       B[a][b]=B[a+5][b+5]/A[a]*C[a];
	        
	       C[a]=0.253;
	       C[a+1]=B[a][b]*A[a];
	        
	       A[a]=C[a]-0.086;
	       C[a]=C[a+5]-0.808;
	        
	       double var_a=B[a][b]-0.513;
	       double var_b=B[a][b-3]*0.418;
	        
	       B[a][b]=A[a]*B[a][b]/C[a];
	       A[a]=A[a-5]+C[a]-B[a][b];
	        
	       C[a]=A[a]*C[a]/B[a][b];
	       A[a]=A[a+4]+B[a][b];
	      }

    return 0;
}
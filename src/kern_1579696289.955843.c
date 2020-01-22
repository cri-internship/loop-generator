#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(710, 910, "random");
	double **C = create_two_dim_double(690, 400, "random");
	double *A = create_one_dim_double(200, "random");

	for (int d = 4; d < 400; d++)
	  for (int c = 5; c < 198; c++)
	    for (int b = 5; b < 198; b++)
	      for (int a = 5; a < 198; a++)
	      {
	        
	       B[a][b]=B[a-1][b-4]+0.224;
	        
	       C[a][b]=0.874;
	       C[a][b]=0.096;
	        
	       A[a]=C[a][b]*B[a][b];
	       A[a-3]=B[a][b]*C[a][b];
	        
	       B[a][b]=A[a];
	        
	       C[a][b]=A[a]/C[a][b]+B[a][b];
	       B[a][b]=A[a-1]*B[a][b]+C[a][b];
	        
	       double var_a=C[a][b]*0.381;
	       double var_b=C[a-5][b]+0.275;
	        
	       A[a]=A[a]/C[a][b]*B[a][b];
	       B[a][b]=A[a+2]-B[a][b];
	      }

    return 0;
}
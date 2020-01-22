#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(780, 780, "random");
	double **A = create_two_dim_double(680, 490, "random");
	double *D = create_one_dim_double(540, "random");
	double *C = create_one_dim_double(670, "random");

	for (int d = 5; d < 490; d++)
	  for (int c = 5; c < 539; c++)
	    for (int b = 5; b < 539; b++)
	      for (int a = 5; a < 539; a++)
	      {
	        
	       C[a]=C[a-4]/D[a]*A[a][b];
	        
	       D[a]=D[a+1]*0.781;
	        
	       C[a]=B[a][b]/A[a][b]-B[a][b];
	        
	       A[a][b]=C[a]-C[a]/B[a][b];
	       A[a-3][b-5]=C[a]*B[a][b]/D[a];
	        
	       D[a]=B[a][b]+D[a]*A[a][b]-C[a];
	       C[a]=B[a+2][b]+D[a];
	        
	       double var_a=B[a][b]/0.672;
	       double var_b=B[a-5][b-4]/0.499;
	      }

    return 0;
}
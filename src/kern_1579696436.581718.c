#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(200, "random");
	double **B = create_two_dim_double(80, 590, "random");
	double *A = create_one_dim_double(850, "random");
	double *D = create_one_dim_double(730, "random");

	for (int d = 0; d < 588; d++)
	  for (int c = 3; c < 80; c++)
	    for (int b = 3; b < 80; b++)
	      for (int a = 3; a < 80; a++)
	      {
	        
	       D[a]=C[a]+A[a];
	       D[a-1]=B[a][b]/C[a];
	        
	       A[a]=D[a]/B[a][b]-C[a];
	       A[a-3]=B[a][b]/C[a];
	        
	       B[a][b]=C[a];
	       B[a][b+2]=D[a]+C[a];
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(530, 20, "random");
	double *B = create_one_dim_double(30, "random");
	double **A = create_two_dim_double(60, 610, "random");

	for (int d = 5; d < 20; d++)
	  for (int c = 3; c < 28; c++)
	    for (int b = 3; b < 28; b++)
	      for (int a = 3; a < 28; a++)
	      {
	        
	       A[a][b]=A[a-2][b]+0.359;
	        
	       B[a]=0.049;
	       B[a+2]=C[a][b]/A[a][b];
	        
	       B[a]=C[a][b]-B[a];
	       C[a][b]=C[a-3][b-1]/0.874+A[a][b];
	        
	       A[a][b]=A[a][b]+C[a][b]-B[a];
	       B[a]=A[a-3][b-5]+B[a]/C[a][b];
	      }

    return 0;
}
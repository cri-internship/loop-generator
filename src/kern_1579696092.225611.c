#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(170, 180, "random");
	double **D = create_two_dim_double(960, 540, "random");
	double **B = create_two_dim_double(30, 430, "random");
	double *C = create_one_dim_double(530, "random");

	for (int d = 5; d < 180; d++)
	  for (int c = 1; c < 170; c++)
	    for (int b = 1; b < 170; b++)
	      for (int a = 1; a < 170; a++)
	      {
	        
	       D[a][b]=D[a+1][b+2]*0.363;
	        
	       A[a][b]=A[a][b]/B[a][b];
	       B[a][b]=A[a-1][b-5]/0.9;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(670, 450, 830, "random");
	double *C = create_one_dim_double(260, "random");
	double *A = create_one_dim_double(110, "random");

	for (int d = 0; d < 110; d++)
	  for (int c = 0; c < 110; c++)
	    for (int b = 0; b < 110; b++)
	      for (int a = 0; a < 110; a++)
	      {
	        
	       C[a]=0.881;
	       float  var_a=C[a]+0.912;
	        
	       A[a]=A[a]*C[a]+B[a][b][c];
	       B[a][b][c]=A[a]-B[a][b][c]/C[a];
	      }

    return 0;
}
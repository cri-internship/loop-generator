#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(710, "random");
	double **B = create_two_dim_double(310, 60, "random");
	double ***A = create_three_dim_double(310, 650, 980, "random");

	for (int d = 4; d < 55; d++)
	  for (int c = 3; c < 308; c++)
	    for (int b = 3; b < 308; b++)
	      for (int a = 3; a < 308; a++)
	      {
	        
	       B[a][b]=B[a-1][b-4]*0.677;
	        
	       C[a]=0.973;
	       C[a-3]=0.027;
	        
	       A[a][b][c]=B[a][b]-A[a][b][c];
	       C[a]=B[a+2][b+5]+C[a];
	      }

    return 0;
}
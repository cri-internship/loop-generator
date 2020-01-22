#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(170, 840, 490, "zeros");
	double *C = create_one_dim_double(360, "zeros");
	double *A = create_one_dim_double(980, "zeros");

	for (int d = 3; d < 488; d++)
	  for (int c = 4; c < 837; c++)
	    for (int b = 3; b < 168; b++)
	      for (int a = 3; a < 168; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-4][c-3]*0.973;
	        
	       A[a]=A[a+5]+B[a][b][c];
	        
	       A[a]=A[a+4]/0.179+C[a];
	        
	       B[a][b][c]=0.555;
	      }

    return 0;
}
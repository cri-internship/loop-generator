#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(710, 950, 140, "zeros");
	double *C = create_one_dim_double(330, "zeros");
	double *A = create_one_dim_double(220, "zeros");

	for (int d = 4; d < 220; d++)
	  for (int c = 4; c < 220; c++)
	    for (int b = 4; b < 220; b++)
	      for (int a = 4; a < 220; a++)
	      {
	        
	       C[a]=C[a+3]*A[a]-B[a][b][c];
	        
	       A[a]=C[a]*C[a];
	       A[a-4]=B[a][b][c]-C[a];
	        
	       A[a]=0.498;
	      }

    return 0;
}
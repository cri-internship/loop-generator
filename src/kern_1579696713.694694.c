#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(550, "zeros");
	double *A = create_one_dim_double(730, "zeros");
	double ***B = create_three_dim_double(750, 640, 70, "zeros");

	for (int d = 3; d < 70; d++)
	  for (int c = 2; c < 640; c++)
	    for (int b = 4; b < 750; b++)
	      for (int a = 4; a < 750; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-2][c-3]+0.991;
	        
	       B[a][b][c]=B[a-2][b-2][c]-A[a]+C[a];
	      }

    return 0;
}
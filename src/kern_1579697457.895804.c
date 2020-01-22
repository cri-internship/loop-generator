#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(680, 190, 730, "zeros");
	double ***D = create_three_dim_double(940, 110, 970, "zeros");
	double *B = create_one_dim_double(250, "zeros");
	double *A = create_one_dim_double(40, "zeros");

	for (int d = 0; d < 248; d++)
	  for (int c = 0; c < 248; c++)
	    for (int b = 0; b < 248; b++)
	      for (int a = 0; a < 248; a++)
	      {
	        
	       B[a]=B[a+1]/0.178;
	        
	       B[a]=C[a][b][c];
	      }

    return 0;
}
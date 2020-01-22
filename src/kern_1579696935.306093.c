#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(890, 790, 560, "zeros");
	double *A = create_one_dim_double(330, "zeros");
	double *C = create_one_dim_double(530, "zeros");

	for (int d = 0; d < 556; d++)
	  for (int c = 0; c < 790; c++)
	    for (int b = 1; b < 528; b++)
	      for (int a = 1; a < 528; a++)
	      {
	        
	       B[a][b][c]=B[a+3][b][c+4]*0.252;
	        
	       C[a]=C[a+2]/0.967;
	        
	       C[a]=A[a];
	      }

    return 0;
}
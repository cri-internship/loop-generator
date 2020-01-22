#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(530, "zeros");
	double ***A = create_three_dim_double(30, 160, 540, "zeros");

	for (int d = 0; d < 540; d++)
	  for (int c = 0; c < 158; c++)
	    for (int b = 3; b < 28; b++)
	      for (int a = 3; a < 28; a++)
	      {
	        
	       B[a]=0.189;
	       B[a-3]=0.871;
	        
	       A[a][b][c]=B[a];
	       A[a+2][b+2][c]=0.153;
	        
	       A[a][b][c]=B[a]+A[a][b][c];
	       B[a]=B[a+4]-0.523;
	      }

    return 0;
}
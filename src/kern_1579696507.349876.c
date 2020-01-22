#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(760, "ones");
	double ***B = create_three_dim_double(300, 320, 450, "ones");

	for (int d = 4; d < 450; d++)
	  for (int c = 3; c < 320; c++)
	    for (int b = 0; b < 300; b++)
	      for (int a = 0; a < 300; a++)
	      {
	        
	       B[a][b][c]=0.691;
	       B[a][b-3][c-4]=A[a];
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(420, 50, "zeros");
	float ***B = create_three_dim_float(460, 560, 710, "zeros");

	for (int d = 3; d < 710; d++)
	  for (int c = 3; c < 50; c++)
	    for (int b = 4; b < 417; b++)
	      for (int a = 4; a < 417; a++)
	      {
	        
	       A[a][b]=A[a+3][b]-0.434;
	        
	       B[a][b][c]=A[a][b];
	       B[a-4][b-3][c-3]=A[a][b];
	      }

    return 0;
}
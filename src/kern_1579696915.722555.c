#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(90, 480, "ones");
	double ***D = create_three_dim_double(320, 210, 710, "ones");
	double **A = create_two_dim_double(810, 310, "ones");
	double **B = create_two_dim_double(640, 40, "ones");

	for (int d = 1; d < 710; d++)
	  for (int c = 4; c < 210; c++)
	    for (int b = 1; b < 320; b++)
	      for (int a = 1; a < 320; a++)
	      {
	        
	       D[a][b][c]=D[a-1][b-4][c-1]/0.832*C[a][b]+B[a][b];
	      }

    return 0;
}
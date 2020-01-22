#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(910, 910, 660, "ones");
	double ***B = create_three_dim_double(560, 380, 680, "ones");
	double **A = create_two_dim_double(530, 700, "ones");
	double ***D = create_three_dim_double(460, 930, 970, "ones");

	for (int d = 0; d < 970; d++)
	  for (int c = 0; c < 929; c++)
	    for (int b = 0; b < 457; b++)
	      for (int a = 0; a < 457; a++)
	      {
	        
	       D[a][b][c]=D[a+3][b+1][c]+0.548;
	      }

    return 0;
}
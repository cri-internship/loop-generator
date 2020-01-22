#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(270, 760, "ones");
	float ***B = create_three_dim_float(30, 190, 400, "ones");
	float **A = create_two_dim_float(510, 110, "ones");

	for (int c = 0; c < 400; c++)
	  for (int b = 3; b < 110; b++)
	    for (int a = 3; a < 29; a++)
	    {
	      
	      B[a][b][c]=B[a+1][b+5][c]+0.506;
	      
	      A[a][b]=0.817;
	      A[a-3][b-3]=0.431;
	    }

    return 0;
}
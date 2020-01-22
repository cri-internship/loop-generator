#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(320, 580, 900, "ones");
	double **A = create_two_dim_double(690, 630, "ones");

	for (int c = 5; c < 897; c++)
	  for (int b = 5; b < 577; b++)
	    for (int a = 5; a < 318; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-1][c-2]-0.467;
	      
	      A[a][b]=A[a][b-5]+0.066;
	      
	      B[a][b][c]=B[a+2][b+3][c+3]-0.873;
	      
	      A[a][b]=B[a][b][c];
	    }

    return 0;
}
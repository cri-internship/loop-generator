#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(310, 60, 160, "zeros");
	double **B = create_two_dim_double(430, 810, "zeros");

	for (int c = 1; c < 810; c++)
	  for (int b = 4; b < 430; b++)
	    for (int a = 4; a < 430; a++)
	    {
	      
	      B[a][b]=B[a][b]/A[a][b][c];
	      A[a][b][c]=B[a-4][b-1]*A[a][b][c];
	    }

    return 0;
}
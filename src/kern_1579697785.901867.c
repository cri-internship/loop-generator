#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(610, 950, 990, "zeros");
	double *A = create_one_dim_double(710, "zeros");

	for (int c = 1; c < 990; c++)
	  for (int b = 0; b < 950; b++)
	    for (int a = 4; a < 610; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b][c-1]-0.566;
	      
	      A[a]=A[a]+B[a][b][c];
	      B[a][b][c]=A[a]/B[a][b][c];
	    }

    return 0;
}
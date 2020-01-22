#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(610, "zeros");
	double *A = create_one_dim_double(690, "zeros");
	double ***B = create_three_dim_double(130, 840, 240, "zeros");

	for (int c = 1; c < 240; c++)
	  for (int b = 1; b < 840; b++)
	    for (int a = 4; a < 130; a++)
	    {
	      
	      A[a]=A[a-4]-B[a][b][c];
	      
	      B[a][b][c]=B[a-2][b-1][c-1]-0.253;
	      
	      C[a]=C[a+1]+0.376;
	    }

    return 0;
}
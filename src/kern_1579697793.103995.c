#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(190, "zeros");
	double ***C = create_three_dim_double(760, 180, 790, "zeros");
	double **A = create_two_dim_double(290, 470, "zeros");

	for (int c = 0; c < 787; c++)
	  for (int b = 0; b < 178; b++)
	    for (int a = 0; a < 285; a++)
	    {
	      
	      C[a][b][c]=C[a+5][b+2][c+3]/0.277;
	      
	      A[a][b]=0.926;
	      A[a+5][b+2]=0.284;
	    }

    return 0;
}
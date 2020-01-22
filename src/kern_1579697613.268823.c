#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(60, "zeros");
	double ***B = create_three_dim_double(970, 280, 950, "zeros");

	for (int c = 2; c < 55; c++)
	  for (int b = 2; b < 55; b++)
	    for (int a = 2; a < 55; a++)
	    {
	      
	      A[a]=A[a-2]*B[a][b][c];
	      
	      A[a]=0.847;
	    }

    return 0;
}
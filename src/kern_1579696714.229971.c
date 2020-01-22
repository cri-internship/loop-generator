#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(860, 430, 200, "zeros");
	double *B = create_one_dim_double(270, "zeros");

	for (int c = 5; c < 200; c++)
	  for (int b = 5; b < 430; b++)
	    for (int a = 3; a < 860; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-5][c-5]*0.974;
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(670, "ones");
	double ***A = create_three_dim_double(1000, 650, 650, "ones");
	double ***C = create_three_dim_double(720, 490, 460, "ones");

	for (int c = 0; c < 666; c++)
	  for (int b = 0; b < 666; b++)
	    for (int a = 0; a < 666; a++)
	    {
	      
	      C[a][b][c]=B[a]-0.999;
	      B[a]=B[a+4]+0.011/A[a][b][c];
	    }

    return 0;
}
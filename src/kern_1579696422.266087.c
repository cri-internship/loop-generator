#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(540, "ones");
	double **A = create_two_dim_double(120, 620, "ones");
	double **D = create_two_dim_double(270, 770, "ones");
	double **C = create_two_dim_double(400, 840, "ones");

	for (int c = 5; c < 620; c++)
	  for (int b = 4; b < 120; b++)
	    for (int a = 4; a < 120; a++)
	    {
	      
	      A[a][b]=A[a-4][b-1]+0.714;
	      
	      C[a][b]=C[a-4][b-5]-0.17;
	    }

    return 0;
}
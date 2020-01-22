#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(990, 900, "ones");
	double ***C = create_three_dim_double(880, 390, 670, "ones");
	double ***D = create_three_dim_double(370, 820, 560, "ones");
	double *B = create_one_dim_double(510, "ones");

	for (int c = 0; c < 667; c++)
	  for (int b = 0; b < 389; b++)
	    for (int a = 0; a < 875; a++)
	    {
	      
	      C[a][b][c]=C[a+5][b+1][c+3]-A[a][b]/B[a];
	    }

    return 0;
}
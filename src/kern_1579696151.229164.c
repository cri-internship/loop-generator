#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(160, "ones");
	double **B = create_two_dim_double(90, 490, "ones");
	double ***A = create_three_dim_double(880, 30, 910, "ones");

	for (int c = 2; c < 910; c++)
	  for (int b = 3; b < 30; b++)
	    for (int a = 3; a < 90; a++)
	    {
	      
	      B[a][b]=B[a-2][b-3]/C[a]-A[a][b][c];
	      
	      A[a][b][c]=A[a-1][b-3][c-2]-B[a][b]+B[a][b];
	      
	      A[a][b][c]=B[a][b]-C[a];
	    }

    return 0;
}
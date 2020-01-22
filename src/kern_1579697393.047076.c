#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(380, 100, 990, "ones");
	double **D = create_two_dim_double(710, 160, "ones");
	double *C = create_one_dim_double(1000, "ones");
	double **B = create_two_dim_double(750, 110, "ones");

	for (int c = 0; c < 988; c++)
	  for (int b = 0; b < 97; b++)
	    for (int a = 2; a < 376; a++)
	    {
	      
	      B[a][b]=B[a-2][b]*0.769;
	      
	      A[a][b][c]=A[a+4][b+3][c+2]-D[a][b];
	      
	      B[a][b]=B[a+2][b]+C[a]-A[a][b][c]/D[a][b];
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(630, 940, 930, "ones");
	double *C = create_one_dim_double(710, "ones");
	double **B = create_two_dim_double(680, 900, "ones");

	for (int c = 0; c < 930; c++)
	  for (int b = 4; b < 897; b++)
	    for (int a = 5; a < 630; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-4][c]*0.503;
	      
	      B[a][b]=B[a-5][b-4]+A[a][b][c];
	      
	      C[a]=C[a+3]+B[a][b];
	      
	      B[a][b]=B[a+2][b+3]*C[a];
	    }

    return 0;
}
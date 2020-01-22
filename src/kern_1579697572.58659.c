#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(80, "ones");
	double *D = create_one_dim_double(830, "ones");
	double ***C = create_three_dim_double(290, 600, 440, "ones");
	double *A = create_one_dim_double(200, "ones");

	for (int c = 0; c < 437; c++)
	  for (int b = 0; b < 600; b++)
	    for (int a = 0; a < 197; a++)
	    {
	      
	      A[a]=A[a+3]*C[a][b][c];
	      
	      C[a][b][c]=0.218;
	      C[a+2][b][c+3]=0.817;
	    }

    return 0;
}
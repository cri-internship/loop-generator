#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(310, 250, "ones");
	float ***D = create_three_dim_float(320, 910, 620, "ones");
	float **A = create_two_dim_float(450, 410, "ones");
	float *B = create_one_dim_float(550, "ones");
	float ***E = create_three_dim_float(60, 900, 460, "ones");

	for (int c = 2; c < 550; c++)
	  for (int b = 2; b < 550; b++)
	    for (int a = 2; a < 550; a++)
	    {
	      
	      B[a]=A[a][b]*C[a][b]+E[a][b][c]/D[a][b][c];
	      B[a-2]=0.483+C[a][b];
	    }

    return 0;
}
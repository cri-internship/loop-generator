#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(960, "ones");
	double **A = create_two_dim_double(40, 320, "ones");
	double ***B = create_three_dim_double(490, 630, 430, "ones");
	double ***C = create_three_dim_double(190, 720, 320, "ones");

	for (int c = 0; c < 320; c++)
	  for (int b = 4; b < 320; b++)
	    for (int a = 2; a < 40; a++)
	    {
	      
	      A[a][b]=A[a-2][b-4]*C[a][b][c]-D[a];
	      
	      C[a][b][c]=C[a][b-4][c]*B[a][b][c];
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(650, 720, "random");
	float **A = create_two_dim_float(280, 410, "random");
	float ***B = create_three_dim_float(410, 990, 750, "random");
	float ***D = create_three_dim_float(790, 920, 40, "random");
	float *C = create_one_dim_float(410, "random");

	for (int c = 5; c < 410; c++)
	  for (int b = 1; b < 280; b++)
	    for (int a = 1; a < 280; a++)
	    {
	      
	      A[a][b]=A[a][b-1]-0.473;
	      
	      E[a][b]=B[a][b][c]*C[a]-D[a][b][c];
	      E[a-1][b-5]=A[a][b]-B[a][b][c]+D[a][b][c]*0.866;
	    }

    return 0;
}
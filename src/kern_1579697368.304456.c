#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(180, 210, 20, "zeros");
	double *A = create_one_dim_double(310, "zeros");
	double ***D = create_three_dim_double(550, 910, 790, "zeros");
	double *B = create_one_dim_double(660, "zeros");

	for (int c = 0; c < 305; c++)
	  for (int b = 0; b < 305; b++)
	    for (int a = 0; a < 305; a++)
	    {
	      
	      B[a]=A[a]-D[a][b][c]/B[a]*C[a][b][c];
	      D[a][b][c]=A[a+5]/D[a][b][c]*0.4-B[a];
	    }

    return 0;
}
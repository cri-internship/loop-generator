#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(610, 200, 730, "zeros");
	float **C = create_two_dim_float(640, 310, "zeros");
	float *A = create_one_dim_float(710, "zeros");
	float ***D = create_three_dim_float(160, 830, 260, "zeros");
	float **B = create_two_dim_float(80, 830, "zeros");

	for (int c = 0; c < 256; c++)
	  for (int b = 2; b < 825; b++)
	    for (int a = 0; a < 80; a++)
	    {
	      
	      B[a][b]=B[a][b-2]+E[a][b][c]/C[a][b]-D[a][b][c];
	      
	      D[a][b][c]=D[a+3][b+5][c+4]-A[a]*B[a][b]+A[a];
	    }

    return 0;
}
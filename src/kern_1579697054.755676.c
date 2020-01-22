#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(800, "zeros");
	float *C = create_one_dim_float(260, "zeros");
	float ***E = create_three_dim_float(200, 30, 630, "zeros");
	float **D = create_two_dim_float(330, 40, "zeros");
	float *B = create_one_dim_float(660, "zeros");

	for (int c = 5; c < 40; c++)
	  for (int b = 1; b < 330; b++)
	    for (int a = 1; a < 330; a++)
	    {
	      
	      D[a][b]=D[a-1][b-5]/C[a];
	      
	      A[a]=A[a+5]/D[a][b]*E[a][b][c];
	    }

    return 0;
}
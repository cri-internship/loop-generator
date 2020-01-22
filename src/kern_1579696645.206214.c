#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(940, "ones");
	float ***E = create_three_dim_float(600, 870, 200, "ones");
	float *B = create_one_dim_float(540, "ones");
	float **A = create_two_dim_float(870, 530, "ones");
	float **D = create_two_dim_float(100, 630, "ones");

	for (int c = 1; c < 529; c++)
	  for (int b = 0; b < 866; b++)
	    for (int a = 0; a < 866; a++)
	    {
	      
	      A[a][b]=A[a+4][b+1]+0.828;
	      
	      A[a][b]=0.056;
	      
	      D[a][b]=C[a]-B[a]+E[a][b][c];
	      C[a]=C[a+4]+D[a][b]/A[a][b]*B[a]-D[a][b];
	    }

    return 0;
}
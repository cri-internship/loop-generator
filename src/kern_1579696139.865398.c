#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(260, 950, 530, "ones");
	float *A = create_one_dim_float(120, "ones");
	float ***C = create_three_dim_float(950, 430, 640, "ones");

	for (int c = 0; c < 526; c++)
	  for (int b = 0; b < 427; b++)
	    for (int a = 0; a < 116; a++)
	    {
	      
	      B[a][b][c]=B[a+4][b][c+4]/0.692;
	      
	      A[a]=A[a+3]/C[a][b][c]+0.131;
	      
	      A[a]=0.495;
	      
	      A[a]=C[a][b][c]-A[a]+A[a];
	      B[a][b][c]=C[a+5][b+3][c+3]*B[a][b][c]/A[a];
	    }

    return 0;
}
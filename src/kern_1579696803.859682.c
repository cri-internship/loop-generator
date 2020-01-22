#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(700, 780, 400, "ones");
	float *A = create_one_dim_float(360, "ones");

	for (int c = 0; c < 395; c++)
	  for (int b = 0; b < 780; b++)
	    for (int a = 4; a < 356; a++)
	    {
	      
	      A[a]=A[a-4]-B[a][b][c];
	      
	      A[a]=A[a+4]-B[a][b][c];
	      
	      B[a][b][c]=0.661;
	      B[a+4][b][c+5]=0.646;
	      
	      A[a]=A[a]+B[a][b][c];
	      B[a][b][c]=A[a]*B[a][b][c];
	    }

    return 0;
}
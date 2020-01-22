#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(920, 230, 840, "zeros");
	float *B = create_one_dim_float(270, "zeros");
	float **D = create_two_dim_float(370, 40, "zeros");
	float **A = create_two_dim_float(590, 450, "zeros");

	for (int c = 0; c < 838; c++)
	  for (int b = 2; b < 230; b++)
	    for (int a = 1; a < 588; a++)
	    {
	      
	      A[a][b]=A[a-1][b-2]/0.114;
	      
	      C[a][b][c]=C[a][b][c+2]*0.633;
	      
	      A[a][b]=0.053;
	    }

    return 0;
}
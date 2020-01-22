#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(910, "zeros");
	float **A = create_two_dim_float(410, 20, "zeros");
	float ***C = create_three_dim_float(610, 220, 670, "zeros");
	float ***D = create_three_dim_float(750, 810, 330, "zeros");
	float ***E = create_three_dim_float(370, 20, 370, "zeros");

	for (int b = 1; b < 15; b++)
	  for (int a = 3; a < 366; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b-1][a]+0.961;
	    
	     E[a][b][a]=E[a+2][b+3][a+4]/D[a][b][a]+C[a][b][a]-0.281;
	    
	     A[a][b]=A[a+2][b+5]/E[a][b][a];
	    
	     C[a][b][a]=B[a]-D[a][b][a]*B[a]+E[a][b][a];
	     C[a+1][b+2][a+3]=B[a]+A[a][b]/D[a][b][a]-E[a][b][a];
	    
	     D[a][b][a]=A[a][b]-B[a]/C[a][b][a];
	  }

    return 0;
}
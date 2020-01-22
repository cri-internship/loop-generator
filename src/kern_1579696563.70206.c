#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(70, "ones");
	float **A = create_two_dim_float(990, 200, "ones");
	float ***D = create_three_dim_float(810, 130, 930, "ones");
	float **B = create_two_dim_float(100, 610, "ones");

	for (int c = 4; c < 927; c++)
	  for (int b = 4; b < 129; b++)
	    for (int a = 1; a < 67; a++)
	    {
	      
	      B[a][b]=B[a+5][b]*0.894;
	      
	      D[a][b][c]=D[a+4][b+1][c+3]*0.083;
	      
	      B[a][b]=B[a+5][b+4]+0.233;
	      
	      D[a][b][c]=A[a][b];
	      
	      C[a]=D[a][b][c]/D[a][b][c]-A[a][b];
	      C[a+3]=A[a][b]/0.035;
	    }

    return 0;
}
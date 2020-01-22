#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(50, 430, "ones");
	float ***D = create_three_dim_float(500, 370, 810, "ones");
	float ***A = create_three_dim_float(950, 240, 910, "ones");
	float ***C = create_three_dim_float(910, 420, 240, "ones");
	float *B = create_one_dim_float(30, "ones");

	for (int c = 2; c < 30; c++)
	  for (int b = 2; b < 30; b++)
	    for (int a = 2; a < 30; a++)
	    {
	      
	      D[a][b][c]=B[a]/0.615+A[a][b][c]*D[a][b][c]-E[a][b];
	      E[a][b]=B[a-2]/0.173*D[a][b][c];
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(920, 140, "ones");
	float **B = create_two_dim_float(910, 30, "ones");
	float ***A = create_three_dim_float(860, 420, 100, "ones");

	for (int c = 3; c < 100; c++)
	  for (int b = 5; b < 28; b++)
	    for (int a = 4; a < 858; a++)
	    {
	      
	      B[a][b]=0.152;
	      float  var_a=B[a][b]/0.95;
	      
	      C[a][b]=C[a-3][b-2]-B[a][b]+0.291;
	      
	      B[a][b]=B[a-4][b-1]-C[a][b]*C[a][b];
	      
	      B[a][b]=B[a+4][b+2]/A[a][b][c]+C[a][b];
	      
	      A[a][b][c]=C[a][b];
	      A[a+2][b+5][c]=C[a][b]*B[a][b];
	      
	      float var_b=A[a][b][c]*0.28;
	      float var_c=A[a-2][b-1][c-3]+0.916;
	    }

    return 0;
}
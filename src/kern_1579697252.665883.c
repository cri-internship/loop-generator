#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(220, 500, 170, "random");
	float *A = create_one_dim_float(870, "random");
	float **B = create_two_dim_float(320, 300, "random");

	for (int c = 5; c < 170; c++)
	  for (int b = 4; b < 297; b++)
	    for (int a = 5; a < 220; a++)
	    {
	      
	      C[a][b][c]=C[a][b-3][c-2]*B[a][b]/A[a];
	      
	      C[a][b][c]=C[a-5][b-4][c-5]-B[a][b]+A[a];
	      
	      B[a][b]=B[a+1][b+3]+0.254;
	    }

    return 0;
}
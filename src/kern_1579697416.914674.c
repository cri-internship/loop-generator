#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(560, "ones");
	float ***E = create_three_dim_float(670, 140, 480, "ones");
	float **B = create_two_dim_float(500, 490, "ones");
	float *A = create_one_dim_float(780, "ones");
	float **C = create_two_dim_float(690, 820, "ones");

	for (int c = 0; c < 487; c++)
	  for (int b = 0; b < 498; b++)
	    for (int a = 0; a < 498; a++)
	    {
	      
	      A[a]=A[a+4]/D[a]*E[a][b][c]-B[a][b]+C[a][b];
	      
	      B[a][b]=B[a+2][b+3]-A[a]+D[a]*C[a][b];
	      
	      D[a]=A[a]/C[a][b];
	      A[a]=A[a+3]/C[a][b]+D[a]-E[a][b][c]*B[a][b];
	    }

    return 0;
}
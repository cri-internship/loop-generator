#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(190, 770, "zeros");
	float *B = create_one_dim_float(440, "zeros");
	float **C = create_two_dim_float(800, 880, "zeros");
	float *D = create_one_dim_float(290, "zeros");

	for (int c = 5; c < 770; c++)
	  for (int b = 5; b < 190; b++)
	    for (int a = 5; a < 190; a++)
	    {
	      
	      C[a][b]=C[a+3][b+1]*0.276;
	      
	      D[a]=A[a][b]/C[a][b]+B[a];
	      D[a-4]=A[a][b]/B[a];
	      
	      A[a][b]=D[a]+D[a]*0.34;
	      A[a-2][b-5]=C[a][b]-B[a];
	      
	      A[a][b]=D[a]-B[a]/A[a][b]*C[a][b];
	      B[a]=D[a-5]*C[a][b]+A[a][b];
	    }

    return 0;
}
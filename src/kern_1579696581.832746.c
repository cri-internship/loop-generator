#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(200, "zeros");
	float **C = create_two_dim_float(1000, 70, "zeros");
	float ***B = create_three_dim_float(410, 940, 160, "zeros");
	float *D = create_one_dim_float(290, "zeros");

	for (int c = 0; c < 69; c++)
	  for (int b = 0; b < 287; b++)
	    for (int a = 0; a < 287; a++)
	    {
	      
	      C[a][b]=C[a+3][b+1]/B[a][b][c];
	      
	      D[a]=A[a];
	      D[a+3]=C[a][b]/B[a][b][c]*A[a];
	    }

    return 0;
}
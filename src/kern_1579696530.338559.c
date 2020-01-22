#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(470, 850, "ones");
	float **C = create_two_dim_float(790, 380, "ones");
	float ***E = create_three_dim_float(520, 930, 570, "ones");
	float *D = create_one_dim_float(530, "ones");
	float *A = create_one_dim_float(350, "ones");

	for (int c = 4; c < 570; c++)
	  for (int b = 3; b < 378; b++)
	    for (int a = 0; a < 520; a++)
	    {
	      
	      C[a][b]=C[a+4][b+2]/0.06;
	      
	      D[a]=D[a+1]-0.34;
	      
	      C[a][b]=C[a+3][b+1]+D[a]*A[a]-E[a][b][c]/B[a][b];
	      
	      E[a][b][c]=C[a][b];
	      E[a][b-3][c-4]=C[a][b];
	    }

    return 0;
}
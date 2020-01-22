#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(360, "ones");
	float **C = create_two_dim_float(760, 940, "ones");
	float *D = create_one_dim_float(330, "ones");
	float ***E = create_three_dim_float(360, 720, 320, "ones");
	float *A = create_one_dim_float(360, "ones");

	for (int c = 2; c < 316; c++)
	  for (int b = 1; b < 715; b++)
	    for (int a = 5; a < 330; a++)
	    {
	      
	      A[a]=A[a-2]*0.526;
	      
	      E[a][b][c]=E[a-2][b-1][c-2]+D[a]/A[a]*B[a];
	      
	      D[a]=D[a-4]*0.15;
	      
	      A[a]=A[a+2]/E[a][b][c];
	      
	      E[a][b][c]=C[a][b]-C[a][b]+D[a];
	      
	      D[a]=D[a]/B[a]*A[a]+C[a][b];
	      E[a][b][c]=D[a-5]+C[a][b];
	      
	      A[a]=E[a][b][c]/B[a]*D[a];
	      C[a][b]=E[a+3][b][c+4]/A[a]+D[a]-B[a]*C[a][b];
	    }

    return 0;
}
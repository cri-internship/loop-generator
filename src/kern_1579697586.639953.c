#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(840, 570, "zeros");
	float ***E = create_three_dim_float(650, 740, 470, "zeros");
	float *A = create_one_dim_float(240, "zeros");
	float **B = create_two_dim_float(70, 400, "zeros");
	float **C = create_two_dim_float(840, 160, "zeros");

	for (int c = 2; c < 160; c++)
	  for (int b = 4; b < 70; b++)
	    for (int a = 4; a < 70; a++)
	    {
	      
	      B[a][b]=B[a-4][b-2]+0.563;
	      
	      C[a][b]=D[a][b]+A[a]-B[a][b]/E[a][b][c];
	      C[a+2][b]=D[a][b];
	      
	      A[a]=C[a][b]-0.153+B[a][b]*C[a][b];
	      A[a-2]=E[a][b][c]+B[a][b]*C[a][b]-D[a][b];
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(740, "ones");
	float *C = create_one_dim_float(340, "ones");
	float **D = create_two_dim_float(940, 210, "ones");
	float ***B = create_three_dim_float(350, 540, 340, "ones");

	for (int c = 0; c < 336; c++)
	  for (int b = 0; b < 206; b++)
	    for (int a = 4; a < 348; a++)
	    {
	      
	      B[a][b][c]=B[a+2][b+5][c]/A[a];
	      
	      B[a][b][c]=B[a+2][b+2][c+4]/C[a]-D[a][b];
	      
	      A[a]=0.498;
	      A[a-4]=0.039;
	      
	      D[a][b]=0.22;
	      D[a][b+4]=0.381;
	      
	      A[a]=B[a][b][c]/D[a][b];
	      
	      float var_a=B[a][b][c]+0.969;
	      float var_b=B[a+1][b][c+1]+0.86;
	    }

    return 0;
}
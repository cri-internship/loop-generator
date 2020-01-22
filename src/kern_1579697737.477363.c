#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(640, 540, "ones");
	float ***B = create_three_dim_float(840, 460, 940, "ones");
	float *A = create_one_dim_float(830, "ones");
	float **C = create_two_dim_float(80, 880, "ones");

	for (int c = 5; c < 940; c++)
	  for (int b = 2; b < 460; b++)
	    for (int a = 1; a < 76; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-2][c-5]/0.636;
	      
	      float var_a=A[a]-0.354;
	      A[a]=0.845;
	      
	      C[a][b]=B[a][b][c]/D[a][b];
	      C[a][b-1]=A[a]/B[a][b][c]+A[a];
	      
	      A[a]=C[a][b]*D[a][b]/0.584-A[a];
	      C[a][b]=C[a+4][b+3]/D[a][b];
	    }

    return 0;
}
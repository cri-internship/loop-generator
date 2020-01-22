#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(620, "random");
	float *A = create_one_dim_float(820, "random");
	float ***B = create_three_dim_float(830, 420, 140, "random");

	for (int c = 0; c < 138; c++)
	  for (int b = 0; b < 417; b++)
	    for (int a = 3; a < 619; a++)
	    {
	      
	      B[a][b][c]=B[a+3][b+3][c+2]+A[a];
	      
	      C[a]=C[a+1]-0.238;
	      
	      C[a]=B[a][b][c]*A[a];
	      
	      float var_a=B[a][b][c]/0.602;
	      float var_b=B[a+1][b+3][c]+0.654;
	    }

    return 0;
}
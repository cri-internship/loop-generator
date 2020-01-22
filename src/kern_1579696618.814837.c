#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(700, "random");
	float **C = create_two_dim_float(830, 440, "random");
	float ***B = create_three_dim_float(920, 50, 660, "random");

	for (int c = 4; c < 659; c++)
	  for (int b = 5; b < 47; b++)
	    for (int a = 3; a < 700; a++)
	    {
	      
	      B[a][b][c]=B[a+3][b+1][c+1]+0.51;
	      
	      B[a][b][c]=C[a][b]*A[a];
	      
	      C[a][b]=A[a]+B[a][b][c];
	      
	      float var_a=B[a][b][c]+0.516;
	      float var_b=B[a-3][b-5][c-4]/0.233;
	    }

    return 0;
}
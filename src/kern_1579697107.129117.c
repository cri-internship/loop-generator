#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(990, 80, 80, "random");
	float **A = create_two_dim_float(60, 620, "random");
	float **C = create_two_dim_float(820, 270, "random");

	for (int c = 1; c < 80; c++)
	  for (int b = 3; b < 80; b++)
	    for (int a = 4; a < 57; a++)
	    {
	      
	      C[a][b]=B[a][b][c]+C[a][b];
	      A[a][b]=B[a-4][b-3][c-1]+A[a][b];
	      
	      float var_a=A[a][b]/0.051;
	      float var_b=A[a+3][b+1]+0.161;
	    }

    return 0;
}
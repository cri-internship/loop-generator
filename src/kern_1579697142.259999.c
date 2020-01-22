#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(270, 660, "random");
	float ***A = create_three_dim_float(220, 250, 410, "random");
	float ***C = create_three_dim_float(220, 660, 80, "random");

	for (int c = 5; c < 80; c++)
	  for (int b = 5; b < 250; b++)
	    for (int a = 5; a < 220; a++)
	    {
	      
	      B[a][b]=B[a-5][b-2]*A[a][b][c]+C[a][b][c];
	      
	      A[a][b][c]=A[a-1][b-5][c-5]/B[a][b];
	      
	      float var_a=C[a][b][c]*0.355;
	      float var_b=C[a-1][b-5][c-5]/0.858;
	    }

    return 0;
}
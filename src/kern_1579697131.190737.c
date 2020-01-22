#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(500, 540, 160, "random");
	float *B = create_one_dim_float(170, "random");

	for (int c = 1; c < 155; c++)
	  for (int b = 4; b < 537; b++)
	    for (int a = 3; a < 165; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-4][c-1]*0.2;
	      
	      A[a][b][c]=A[a-3][b-4][c]*B[a];
	      
	      B[a]=B[a+5]*0.943;
	      
	      A[a][b][c]=A[a+5][b+3][c+2]*B[a];
	      
	      float var_a=A[a][b][c]+0.088;
	      float var_b=A[a-3][b-2][c]/0.918;
	    }

    return 0;
}
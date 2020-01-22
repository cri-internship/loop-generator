#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(910, 540, 240, "random");
	float *B = create_one_dim_float(970, "random");

	for (int c = 3; c < 236; c++)
	  for (int b = 5; b < 535; b++)
	    for (int a = 5; a < 908; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-5][c-1]*B[a];
	      
	      float var_a=A[a][b][c]-0.052;
	      float var_b=A[a-5][b-4][c-1]*0.494;
	      
	      float var_c=A[a][b][c]*0.847;
	      float var_d=A[a-3][b-3][c-3]/0.682;
	      
	      B[a]=A[a][b][c]/0.776;
	      A[a][b][c]=A[a+2][b+5][c+4]+0.806;
	    }

    return 0;
}
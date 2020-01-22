#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(680, 190, 780, "random");
	float *A = create_one_dim_float(750, "random");
	float ***B = create_three_dim_float(30, 500, 890, "random");

	for (int c = 3; c < 776; c++)
	  for (int b = 4; b < 190; b++)
	    for (int a = 3; a < 30; a++)
	    {
	      
	      C[a][b][c]=C[a][b-4][c-3]-0.395*B[a][b][c];
	      
	      C[a][b][c]=C[a+2][b][c+1]+0.813;
	      
	      float var_a=B[a][b][c]/0.036;
	      float var_b=B[a-3][b-2][c]-0.348;
	      
	      float var_c=C[a][b][c]/0.784;
	      float var_d=C[a+5][b][c+4]*0.306;
	    }

    return 0;
}
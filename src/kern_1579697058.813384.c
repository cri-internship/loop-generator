#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(160, 790, 380, "random");
	float ***C = create_three_dim_float(970, 440, 330, "random");
	float **D = create_two_dim_float(260, 380, "random");
	float *A = create_one_dim_float(20, "random");

	for (int c = 5; c < 375; c++)
	  for (int b = 0; b < 787; b++)
	    for (int a = 3; a < 156; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b][c-5]/0.413;
	      
	      B[a][b][c]=0.143;
	      
	      float var_a=B[a][b][c]+0.634;
	      float var_b=B[a+2][b+3][c+5]+0.799;
	    }

    return 0;
}
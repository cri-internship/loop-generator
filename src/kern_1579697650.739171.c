#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(450, 970, 410, "ones");
	float **B = create_two_dim_float(680, 660, "ones");
	float ***A = create_three_dim_float(400, 180, 230, "ones");

	for (int c = 0; c < 226; c++)
	  for (int b = 0; b < 177; b++)
	    for (int a = 0; a < 398; a++)
	    {
	      
	      C[a][b][c]=0.256;
	      C[a+4][b+3][c+2]=0.874;
	      
	      float var_a=A[a][b][c]+0.682;
	      float var_b=A[a+2][b+3][c+4]/0.051;
	    }

    return 0;
}
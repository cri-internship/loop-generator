#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(630, "ones");
	float *B = create_one_dim_float(230, "ones");
	float *D = create_one_dim_float(860, "ones");
	float ***A = create_three_dim_float(250, 740, 460, "ones");

	for (int c = 5; c < 457; c++)
	  for (int b = 2; b < 738; b++)
	    for (int a = 3; a < 248; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-2][c-5]-0.341;
	      
	      A[a][b][c]=A[a+2][b+2][c+3]+0.67;
	      
	      float var_a=D[a]*0.661;
	      float var_b=D[a-3]/0.763;
	    }

    return 0;
}
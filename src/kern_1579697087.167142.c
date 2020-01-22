#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(320, 170, "zeros");
	float ***A = create_three_dim_float(980, 370, 130, "zeros");
	float *C = create_one_dim_float(710, "zeros");

	for (int c = 0; c < 127; c++)
	  for (int b = 0; b < 167; b++)
	    for (int a = 0; a < 320; a++)
	    {
	      
	      B[a][b]=B[a][b+3]/A[a][b][c]+0.099;
	      
	      A[a][b][c]=A[a+2][b+5][c+3]+0.48;
	    }

    return 0;
}
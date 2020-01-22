#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(110, 870, "zeros");
	float ***A = create_three_dim_float(900, 560, 390, "zeros");

	for (int c = 2; c < 385; c++)
	  for (int b = 0; b < 560; b++)
	    for (int a = 0; a < 896; a++)
	    {
	      
	      A[a][b][c]=0.274;
	      A[a][b][c-2]=B[a][b];
	      
	      float var_a=A[a][b][c]+0.125;
	      float var_b=A[a+4][b][c+5]+0.106;
	    }

    return 0;
}
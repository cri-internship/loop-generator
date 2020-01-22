#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(590, 230, 280, "zeros");
	float *B = create_one_dim_float(540, "zeros");

	for (int c = 0; c < 278; c++)
	  for (int b = 0; b < 228; b++)
	    for (int a = 3; a < 540; a++)
	    {
	      
	      B[a]=0.106;
	      B[a-3]=0.705;
	      
	      A[a][b][c]=0.152;
	      A[a+5][b+2][c+2]=0.964;
	    }

    return 0;
}
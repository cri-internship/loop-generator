#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(750, 780, 10, "zeros");
	float *B = create_one_dim_float(590, "zeros");

	for (int c = 0; c < 5; c++)
	  for (int b = 0; b < 776; b++)
	    for (int a = 0; a < 585; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b+4][c+5]/B[a];
	      
	      B[a]=A[a][b][c];
	      B[a+5]=A[a][b][c];
	    }

    return 0;
}
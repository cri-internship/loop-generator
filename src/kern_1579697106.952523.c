#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(940, 30, "zeros");
	float *B = create_one_dim_float(540, "zeros");
	float ***C = create_three_dim_float(370, 90, 900, "zeros");

	for (int c = 3; c < 900; c++)
	  for (int b = 5; b < 90; b++)
	    for (int a = 2; a < 370; a++)
	    {
	      
	      B[a]=C[a][b][c];
	      C[a][b][c]=B[a]/0.049;
	      
	      C[a][b][c]=0.726;
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(190, "ones");
	float ***B = create_three_dim_float(900, 180, 760, "ones");

	for (int c = 0; c < 755; c++)
	  for (int b = 0; b < 178; b++)
	    for (int a = 0; a < 895; a++)
	    {
	      
	      B[a][b][c]=A[a];
	      B[a+5][b+2][c+5]=A[a];
	    }

    return 0;
}
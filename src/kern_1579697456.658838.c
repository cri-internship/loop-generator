#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(370, 800, 10, "ones");
	float ***C = create_three_dim_float(150, 110, 930, "ones");
	float *A = create_one_dim_float(410, "ones");

	for (int c = 0; c < 7; c++)
	  for (int b = 0; b < 798; b++)
	    for (int a = 0; a < 370; a++)
	    {
	      
	      A[a]=A[a+1]*0.119;
	      
	      B[a][b][c]=0.289;
	      B[a][b+2][c+3]=0.269;
	    }

    return 0;
}
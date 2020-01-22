#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(430, 330, 320, "ones");
	float **B = create_two_dim_float(530, 960, "ones");

	for (int c = 1; c < 320; c++)
	  for (int b = 3; b < 330; b++)
	    for (int a = 4; a < 430; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-3][c-1]*0.575;
	      
	      B[a][b]=B[a+2][b+3]*A[a][b][c];
	      
	      B[a][b]=0.693;
	    }

    return 0;
}
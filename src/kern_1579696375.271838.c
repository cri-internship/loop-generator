#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(320, 560, 470, "zeros");
	float **B = create_two_dim_float(720, 90, "zeros");

	for (int c = 0; c < 468; c++)
	  for (int b = 0; b < 88; b++)
	    for (int a = 0; a < 317; a++)
	    {
	      
	      A[a][b][c]=B[a][b];
	      A[a+3][b+1][c+2]=0.625;
	      
	      A[a][b][c]=B[a][b]/A[a][b][c];
	      B[a][b]=B[a+5][b+2]+0.08;
	    }

    return 0;
}
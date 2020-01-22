#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(880, 740, 560, "ones");
	float ***C = create_three_dim_float(290, 110, 400, "ones");
	float **B = create_two_dim_float(910, 110, "ones");

	for (int c = 4; c < 399; c++)
	  for (int b = 1; b < 105; b++)
	    for (int a = 3; a < 289; a++)
	    {
	      
	      C[a][b][c]=A[a][b][c];
	      C[a+1][b+2][c+1]=B[a][b]+A[a][b][c];
	      
	      C[a][b][c]=0.89;
	      
	      B[a][b]=0.171;
	      B[a+3][b+5]=0.481;
	    }

    return 0;
}
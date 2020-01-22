#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(930, 210, "zeros");
	float ***A = create_three_dim_float(150, 150, 710, "zeros");

	for (int c = 0; c < 706; c++)
	  for (int b = 4; b < 145; b++)
	    for (int a = 4; a < 145; a++)
	    {
	      
	      B[a][b]=B[a-3][b-1]+0.807;
	      
	      B[a][b]=B[a-4][b-4]/A[a][b][c];
	      
	      A[a][b][c]=A[a+5][b][c+2]-B[a][b];
	      
	      A[a][b][c]=B[a][b];
	      
	      float var_a=B[a][b]+0.605;
	      float var_b=B[a+1][b+2]+0.625;
	    }

    return 0;
}
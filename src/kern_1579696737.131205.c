#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(90, 210, 760, "random");
	float **B = create_two_dim_float(880, 300, "random");

	for (int c = 5; c < 760; c++)
	  for (int b = 5; b < 210; b++)
	    for (int a = 4; a < 90; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-5][c-5]-0.899;
	      
	      A[a][b][c]=A[a-2][b-1][c-5]+0.7;
	      
	      B[a][b]=A[a][b][c];
	      B[a+3][b+1]=A[a][b][c];
	      
	      float var_a=B[a][b]+0.915;
	      float var_b=B[a-3][b-1]+0.881;
	      
	      A[a][b][c]=A[a][b][c]-B[a][b];
	      B[a][b]=A[a-4][b-5][c-4]/B[a][b];
	    }

    return 0;
}
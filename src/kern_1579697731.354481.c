#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(130, 20, 380, "zeros");
	float **B = create_two_dim_float(740, 550, "zeros");

	for (int c = 3; c < 379; c++)
	  for (int b = 5; b < 17; b++)
	    for (int a = 5; a < 125; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-1][c-3]*0.888;
	      
	      B[a][b]=B[a-1][b-2]-0.154;
	      
	      A[a][b][c]=A[a+5][b+1][c]*0.17;
	      
	      B[a][b]=A[a][b][c];
	      
	      B[a][b]=B[a][b]-A[a][b][c];
	      A[a][b][c]=B[a-3][b]+A[a][b][c];
	      
	      float var_a=B[a][b]/0.484;
	      float var_b=B[a-2][b-5]+0.966;
	    }

    return 0;
}
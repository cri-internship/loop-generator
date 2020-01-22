#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(920, 950, 260, "ones");
	float **B = create_two_dim_float(510, 940, "ones");

	for (int c = 2; c < 259; c++)
	  for (int b = 5; b < 937; b++)
	    for (int a = 3; a < 508; a++)
	    {
	      
	      B[a][b]=B[a+2][b+3]-0.247;
	      
	      A[a][b][c]=A[a+4][b][c+1]*0.604;
	      
	      B[a][b]=0.07;
	      
	      A[a][b][c]=0.704;
	      
	      float var_a=B[a][b]-0.27;
	      float var_b=B[a-3][b-5]+0.985;
	    }

    return 0;
}
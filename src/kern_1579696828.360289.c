#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(50, 460, "ones");
	float **B = create_two_dim_float(570, 200, "ones");
	float **C = create_two_dim_float(310, 680, "ones");

	for (int c = 5; c < 195; c++)
	  for (int b = 3; b < 50; b++)
	    for (int a = 3; a < 50; a++)
	    {
	      
	      A[a][b]=A[a-3][b-5]/0.519;
	      
	      C[a][b]=C[a-2][b-3]-A[a][b]*B[a][b];
	      
	      B[a][b]=B[a][b]-C[a][b];
	      C[a][b]=B[a+3][b+5]-C[a][b];
	      
	      float var_a=A[a][b]+0.88;
	      float var_b=A[a][b+1]/0.821;
	      
	      float var_c=C[a][b]-0.431;
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(760, 30, "ones");
	float **C = create_two_dim_float(160, 300, "ones");
	float **D = create_two_dim_float(610, 280, "ones");
	float **A = create_two_dim_float(1000, 760, "ones");

	for (int c = 3; c < 30; c++)
	  for (int b = 3; b < 155; b++)
	    for (int a = 3; a < 155; a++)
	    {
	      
	      C[a][b]=C[a+5][b]*0.624;
	      
	      D[a][b]=D[a+5][b+2]/0.205;
	      
	      A[a][b]=A[a+2][b+3]*0.328;
	      
	      A[a][b]=C[a][b]-D[a][b]/B[a][b];
	      
	      float var_a=A[a][b]+0.326;
	      float var_b=A[a-1][b-3]*0.981;
	      
	      B[a][b]=B[a][b]*A[a][b]/C[a][b];
	      A[a][b]=B[a-3][b]-D[a][b]*A[a][b]+C[a][b];
	    }

    return 0;
}
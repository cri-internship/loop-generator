#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(1000, 750, "zeros");
	float **B = create_two_dim_float(430, 870, "zeros");

	for (int c = 1; c < 747; c++)
	  for (int b = 2; b < 429; b++)
	    for (int a = 2; a < 429; a++)
	    {
	      
	      A[a][b]=A[a][b-1]-B[a][b];
	      
	      B[a][b]=B[a-2][b]/0.756;
	      
	      A[a][b]=A[a+5][b+1]*B[a][b];
	      
	      B[a][b]=0.138;
	      
	      float var_a=A[a][b]*0.697;
	      float var_b=A[a+3][b+3]-0.522;
	    }

    return 0;
}
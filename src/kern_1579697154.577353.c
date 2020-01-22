#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(410, "zeros");
	float ***B = create_three_dim_float(30, 850, 200, "zeros");

	for (int b = 1; b < 848; b++)
	  for (int a = 5; a < 27; a++)
	  {
	    
	     A[a]=B[a][b][a];
	     A[a]=A[a]+0.03;
	    
	     A[a]=A[a+4]+B[a][b][a];
	    
	     B[a][b][a]=B[a][b+1][a+3]-0.451;
	    
	     float var_a=A[a]+0.125;
	     A[a]=0.882;
	    
	     B[a][b][a]=0.131;
	    
	     B[a][b][a]=B[a][b][a]/0.979;
	     A[a]=B[a][b][a-3]+A[a];
	    
	     float var_b=B[a][b][a]/0.173;
	     float var_c=B[a-5][b-1][a-4]/0.553;
	  }

    return 0;
}
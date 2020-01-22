#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(60, 880, "random");
	float **A = create_two_dim_float(10, 670, "random");

	for (int b = 2; b < 665; b++)
	  for (int a = 5; a < 7; a++)
	  {
	    
	     A[a][b]=A[a+3][b+5]+0.013;
	    
	     A[a][b]=A[a+1][b+5]+B[a][b];
	    
	     float var_a=B[a][b]+0.562;
	     float var_b=B[a+2][b+2]/0.754;
	    
	     float var_c=A[a][b]/0.435;
	     float var_d=A[a][b+4]/0.546;
	    
	     float var_e=A[a][b]+0.29;
	     float var_f=A[a][b+5]-0.737;
	  }

    return 0;
}
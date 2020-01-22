#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(450, 110, "ones");
	float *B = create_one_dim_float(40, "ones");

	for (int b = 5; b < 105; b++)
	  for (int a = 2; a < 448; a++)
	  {
	    
	     A[a][b]=0.824;
	     A[a+2][b+5]=0.859;
	    
	     float var_a=A[a][b]/0.594;
	     float var_b=A[a-2][b-5]*0.911;
	    
	     B[a]=A[a][b]-B[a];
	     A[a][b]=A[a][b-1]+B[a];
	    
	     float var_c=A[a][b]+0.467;
	     float var_d=A[a][b-3]*0.789;
	  }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(930, 320, 960, "ones");
	float *C = create_one_dim_float(130, "ones");
	float **A = create_two_dim_float(980, 730, "ones");

	for (int b = 2; b < 320; b++)
	  for (int a = 5; a < 129; a++)
	  {
	    
	     C[a]=A[a][b];
	     C[a-2]=0.617;
	    
	     A[a][b]=C[a]-B[a][b][a]+A[a][b];
	     C[a]=C[a-5]*A[a][b];
	    
	     float var_a=B[a][b][a]/0.204;
	     float var_b=B[a-3][b-2][a-5]/0.944;
	    
	     float var_c=C[a]*0.802;
	     float var_d=C[a+1]*0.48;
	  }

    return 0;
}
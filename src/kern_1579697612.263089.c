#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(330, "random");
	float *C = create_one_dim_float(850, "random");
	float **A = create_two_dim_float(250, 530, "random");

	for (int b = 4; b < 525; b++)
	  for (int a = 5; a < 248; a++)
	  {
	    
	     A[a][b]=A[a-5][b]+0.434;
	    
	     A[a][b]=A[a-4][b-3]*C[a];
	    
	     A[a][b]=A[a][b+4]+B[a];
	    
	     A[a][b]=A[a+2][b+5]/C[a];
	    
	     float var_a=C[a]-0.18;
	    
	     float var_c=C[a]*0.103;
	     float var_d=C[a-3]-0.562;
	  }

    return 0;
}
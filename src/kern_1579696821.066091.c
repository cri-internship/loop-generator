#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(60, 430, 340, "random");
	float *A = create_one_dim_float(340, "random");

	for (int b = 3; b < 425; b++)
	  for (int a = 5; a < 56; a++)
	  {
	    
	     A[a]=A[a-3]-0.644;
	    
	     A[a]=A[a-5]*B[a][b][a];
	    
	     B[a][b][a]=B[a+1][b+5][a+4]*0.55;
	    
	     B[a][b][a]=B[a][b+1][a+3]+0.669;
	    
	     A[a]=B[a][b][a]+A[a];
	     B[a][b][a]=B[a-3][b-3][a-4]*A[a];
	    
	     float var_a=B[a][b][a]+0.036;
	     float var_b=B[a-5][b][a-5]*0.738;
	  }

    return 0;
}
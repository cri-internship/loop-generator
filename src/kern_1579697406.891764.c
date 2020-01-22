#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(970, 300, 580, "random");
	float *B = create_one_dim_float(170, "random");

	for (int b = 1; b < 297; b++)
	  for (int a = 5; a < 170; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-1][a-1]+0.006;
	    
	     B[a]=0.172;
	     float  var_a=B[a]+0.453;
	    
	     B[a]=B[a-1]-A[a][b][a];
	    
	     A[a][b][a]=B[a]*A[a][b][a];
	     B[a]=A[a][b][a];
	    
	     float var_b=A[a][b][a]*0.125;
	     float var_c=A[a+2][b+3][a+5]+0.442;
	  }

    return 0;
}
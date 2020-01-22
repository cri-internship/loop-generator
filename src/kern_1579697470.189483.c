#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(20, 710, 470, "zeros");
	float *D = create_one_dim_float(320, "zeros");
	float ***C = create_three_dim_float(700, 370, 590, "zeros");
	float ***B = create_three_dim_float(780, 300, 520, "zeros");

	for (int b = 3; b < 300; b++)
	  for (int a = 1; a < 15; a++)
	  {
	    
	     D[a]=0.11;
	     float  var_a=D[a]/0.263;
	    
	     B[a][b][a]=B[a-1][b-3][a]*0.609;
	    
	     C[a][b][a]=A[a][b][a];
	     C[a+4][b+2][a+1]=B[a][b][a];
	    
	     float var_b=A[a][b][a]*0.725;
	     float var_c=A[a][b+1][a+5]/0.339;
	  }

    return 0;
}
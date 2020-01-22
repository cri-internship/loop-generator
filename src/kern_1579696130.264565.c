#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(110, "zeros");
	float ***A = create_three_dim_float(330, 500, 750, "zeros");
	float *C = create_one_dim_float(970, "zeros");

	for (int b = 5; b < 105; b++)
	  for (int a = 5; a < 105; a++)
	  {
	    
	     B[a]=0.295;
	     float  var_a=B[a]*0.903;
	    
	     C[a]=C[a-5]/A[a][b][a];
	    
	     B[a]=B[a+5]-0.594;
	    
	     C[a]=B[a]/B[a];
	    
	     A[a][b][a]=C[a]-A[a][b][a]*B[a];
	     C[a]=C[a-3]*B[a];
	    
	     float var_b=C[a]-0.045;
	    
	     B[a]=C[a]+B[a]*0.753;
	     A[a][b][a]=C[a+1]/A[a][b][a];
	  }

    return 0;
}
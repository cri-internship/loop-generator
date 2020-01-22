#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(760, 460, 430, "ones");
	float **B = create_two_dim_float(980, 860, "ones");

	for (int b = 1; b < 855; b++)
	  for (int a = 4; a < 977; a++)
	  {
	    
	     B[a][b]=0.3;
	     float  var_a=B[a][b]*0.977;
	    
	     B[a][b]=B[a+3][b+5]-0.174;
	    
	     A[a][b][a]=B[a][b]-A[a][b][a];
	     B[a][b]=B[a-4][b-1]+0.646;
	    
	     A[a][b][a]=B[a][b]*0.241;
	  }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(170, 980, 770, "zeros");
	float *B = create_one_dim_float(450, "zeros");

	for (int b = 0; b < 975; b++)
	  for (int a = 3; a < 166; a++)
	  {
	    
	     B[a]=B[a-3]/0.1;
	    
	     B[a]=B[a+3]-0.232;
	    
	     A[a][b][a]=A[a+3][b+5][a+4]+0.253;
	    
	     B[a]=B[a+4]/0.703;
	  }

    return 0;
}
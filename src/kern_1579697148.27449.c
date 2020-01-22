#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(620, 510, "zeros");

	for (int c = 4; c < 508; c++)
	  for (int b = 2; b < 616; b++)
	    for (int a = 2; a < 616; a++)
	    {
	      
	      A[a][b]=A[a+4][b+1]/0.815;
	      
	      float var_a=A[a][b]*0.362;
	      float var_b=A[a+4][b+2]+0.138;
	      
	      float var_c=A[a][b]/0.314;
	      float var_d=A[a-2][b-4]*0.206;
	    }

    return 0;
}
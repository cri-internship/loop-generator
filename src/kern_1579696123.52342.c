#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(860, 350, 450, "ones");

	for (int b = 2; b < 346; b++)
	  for (int a = 2; a < 855; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-2][a-2]*0.421;
	    
	     A[a][b][a]=A[a][b+2][a+3]-0.747;
	    
	     A[a][b][a]=A[a+1][b][a]-0.498;
	    
	     float var_a=A[a][b][a]/0.082;
	     float var_b=A[a+1][b+4][a+4]-0.488;
	    
	     float var_c=A[a][b][a]+0.033;
	     float var_d=A[a][b][a-2]-0.881;
	  }

    return 0;
}
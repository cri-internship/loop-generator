#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(10, 540, 330, "zeros");

	for (int b = 4; b < 536; b++)
	  for (int a = 5; a < 6; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-4][a-2]+0.073;
	    
	     A[a][b][a]=0.455;
	    
	     float var_a=A[a][b][a]+0.641;
	     float var_b=A[a+4][b+4][a+2]/0.829;
	    
	     float var_c=A[a][b][a]/0.301;
	     float var_d=A[a][b+3][a+4]/0.332;
	    
	     float var_e=A[a][b][a]+0.308;
	     float var_f=A[a-5][b][a-4]+0.161;
	    
	     float var_g=A[a][b][a]-0.841;
	     float var_h=A[a+2][b+4][a+1]-0.187;
	  }

    return 0;
}
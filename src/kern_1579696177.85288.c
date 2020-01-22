#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(390, 400, 970, "ones");
	float ***A = create_three_dim_float(180, 510, 680, "ones");
	float **C = create_two_dim_float(780, 860, "ones");

	for (int b = 0; b < 505; b++)
	  for (int a = 0; a < 177; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+3][a+1]+0.833;
	    
	     A[a][b][a]=A[a+2][b+1][a+3]*0.758;
	    
	     float var_a=A[a][b][a]-0.579;
	     float var_b=A[a][b+5][a+1]*0.817;
	  }

    return 0;
}
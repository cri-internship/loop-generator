#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(820, 30, 810, "ones");
	float ***B = create_three_dim_float(730, 250, 790, "ones");

	for (int b = 3; b < 26; b++)
	  for (int a = 5; a < 726; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-1][a-2]-B[a][b][a];
	    
	     A[a][b][a]=A[a-1][b-2][a-1]/0.226;
	    
	     B[a][b][a]=B[a-3][b-3][a-5]*0.132;
	    
	     B[a][b][a]=B[a+3][b+2][a+4]-0.875;
	    
	     float var_a=A[a][b][a]/0.756;
	     float var_b=A[a+2][b+4][a]-0.254;
	  }

    return 0;
}
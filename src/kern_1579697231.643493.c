#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(640, 90, 20, "ones");
	float **A = create_two_dim_float(800, 910, "ones");

	for (int b = 4; b < 89; b++)
	  for (int a = 5; a < 635; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-1][a-4]-0.998;
	    
	     B[a][b][a]=B[a-4][b][a-4]-0.257;
	    
	     A[a][b]=A[a+4][b+1]/B[a][b][a];
	    
	     B[a][b][a]=B[a+3][b][a+5]+0.8;
	    
	     B[a][b][a]=B[a+5][b][a+2]/A[a][b];
	    
	     A[a][b]=0.994;
	    
	     float var_a=B[a][b][a]*0.295;
	     float var_b=B[a+3][b+1][a+2]+0.076;
	  }

    return 0;
}
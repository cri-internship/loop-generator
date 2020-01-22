#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(750, 390, "random");
	float ***B = create_three_dim_float(630, 70, 650, "random");

	for (int b = 0; b < 69; b++)
	  for (int a = 0; a < 628; a++)
	  {
	    
	     B[a][b][a]=B[a+1][b+1][a+2]/0.328;
	    
	     float var_a=B[a][b][a]*0.968;
	     float var_b=B[a][b][a]-0.557;
	    
	     A[a][b]=A[a][b]/B[a][b][a];
	     B[a][b][a]=A[a+2][b+5]+B[a][b][a];
	  }

    return 0;
}
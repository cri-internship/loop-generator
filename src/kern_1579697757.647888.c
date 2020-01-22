#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(20, 510, 420, "random");
	float **A = create_two_dim_float(550, 510, "random");

	for (int b = 1; b < 505; b++)
	  for (int a = 5; a < 19; a++)
	  {
	    
	     A[a][b]=A[a+5][b+4]+0.094;
	    
	     B[a][b][a]=B[a+1][b+3][a]*A[a][b];
	    
	     B[a][b][a]=B[a][b+4][a]-A[a][b];
	    
	     A[a][b]=B[a][b][a];
	    
	     A[a][b]=B[a][b][a]/A[a][b];
	     B[a][b][a]=B[a-5][b-1][a-2]+A[a][b];
	    
	     float var_a=A[a][b]/0.93;
	     float var_b=A[a+4][b+1]-0.111;
	  }

    return 0;
}
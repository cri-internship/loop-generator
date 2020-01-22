#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(930, 360, 80, "zeros");
	float **A = create_two_dim_float(910, 880, "zeros");

	for (int b = 4; b < 360; b++)
	  for (int a = 4; a < 908; a++)
	  {
	    
	     A[a][b]=A[a-4][b-3]/0.832;
	    
	     B[a][b][a]=B[a-4][b-2][a]*0.403;
	    
	     A[a][b]=A[a+2][b+4]*B[a][b][a];
	    
	     B[a][b][a]=A[a][b]-B[a][b][a];
	     A[a][b]=A[a-4][b-4]-0.473;
	  }

    return 0;
}
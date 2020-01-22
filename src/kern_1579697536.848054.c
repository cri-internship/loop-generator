#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(740, 300, 420, "random");
	float ***B = create_three_dim_float(950, 20, 50, "random");

	for (int b = 4; b < 15; b++)
	  for (int a = 5; a < 740; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-4][a-5]*0.549;
	    
	     A[a][b][a]=A[a-4][b-2][a]-0.249;
	    
	     B[a][b][a]=B[a-2][b-4][a]+0.203;
	    
	     B[a][b][a]=B[a+1][b+5][a]/A[a][b][a];
	    
	     A[a][b][a]=B[a][b][a]*A[a][b][a];
	     B[a][b][a]=B[a-1][b-4][a-2]-A[a][b][a];
	    
	     A[a][b][a]=B[a][b][a]/A[a][b][a];
	     B[a][b][a]=B[a-5][b-4][a-2]/A[a][b][a];
	    
	     float var_a=B[a][b][a]+0.865;
	     float var_b=B[a-4][b][a]-0.298;
	  }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(530, 930, "ones");
	float **D = create_two_dim_float(550, 910, "ones");
	float ***A = create_three_dim_float(270, 440, 840, "ones");
	float ***C = create_three_dim_float(440, 490, 570, "ones");

	for (int b = 5; b < 440; b++)
	  for (int a = 5; a < 270; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b-1][a]/0.975;
	    
	     D[a][b]=0.716;
	     D[a+5][b]=B[a][b]*A[a][b][a]+C[a][b][a];
	    
	     D[a][b]=B[a][b]/C[a][b][a]*A[a][b][a];
	    
	     A[a][b][a]=D[a][b]/D[a][b]-C[a][b][a];
	     A[a-1][b-2][a-4]=B[a][b]+C[a][b][a];
	    
	     float var_a=A[a][b][a]+0.637;
	     float var_b=A[a-3][b-2][a-3]-0.348;
	    
	     float var_c=C[a][b][a]+0.123;
	     float var_d=C[a-5][b-4][a-2]*0.547;
	  }

    return 0;
}
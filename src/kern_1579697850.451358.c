#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(700, 610, 870, "ones");
	float ***B = create_three_dim_float(60, 160, 500, "ones");
	float **A = create_two_dim_float(400, 440, "ones");

	for (int b = 4; b < 440; b++)
	  for (int a = 5; a < 400; a++)
	  {
	    
	     C[a][b][a]=C[a][b-4][a-5]-A[a][b];
	    
	     C[a][b][a]=C[a+2][b+4][a+2]+0.161;
	    
	     A[a][b]=0.789;
	     A[a-1][b-1]=0.815;
	    
	     float var_a=C[a][b][a]*0.607;
	     float var_b=C[a][b][a-4]*0.901;
	    
	     float var_c=C[a][b][a]*0.432;
	     float var_d=C[a+3][b+5][a+2]+0.554;
	  }

    return 0;
}
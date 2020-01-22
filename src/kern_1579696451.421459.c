#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(860, 430, "zeros");
	float **C = create_two_dim_float(660, 20, "zeros");
	float ***E = create_three_dim_float(890, 330, 300, "zeros");
	float ***D = create_three_dim_float(500, 560, 730, "zeros");
	float ***A = create_three_dim_float(260, 470, 770, "zeros");

	for (int b = 0; b < 16; b++)
	  for (int a = 4; a < 498; a++)
	  {
	    
	     E[a][b][a]=E[a-2][b][a-4]*D[a][b][a]-A[a][b][a];
	    
	     D[a][b][a]=D[a][b+4][a+2]+0.895/B[a][b];
	    
	     float var_a=C[a][b]/0.616;
	     float var_b=C[a+4][b+4]/0.844;
	  }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(550, 160, 540, "ones");
	float ***B = create_three_dim_float(560, 760, 850, "ones");

	for (int c = 3; c < 850; c++)
	  for (int b = 5; b < 760; b++)
	    for (int a = 4; a < 560; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-5][c-2]*A[a][b][c];
	      
	      float var_a=B[a][b][c]+0.375;
	      float var_b=B[a-1][b-2][c-3]*0.616;
	    }

    return 0;
}
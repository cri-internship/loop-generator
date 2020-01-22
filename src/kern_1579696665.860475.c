#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(410, 630, 10, "ones");
	float ***B = create_three_dim_float(20, 300, 120, "ones");
	float ***E = create_three_dim_float(780, 640, 920, "ones");
	float ***A = create_three_dim_float(570, 250, 460, "ones");
	float ***D = create_three_dim_float(820, 900, 750, "ones");

	for (int c = 0; c < 10; c++)
	  for (int b = 3; b < 246; b++)
	    for (int a = 1; a < 410; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-3][c]/0.543;
	      
	      float var_a=A[a][b][c]*0.741;
	      float var_b=A[a+2][b+4][c+4]*0.522;
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(740, 210, 90, "ones");
	float ***C = create_three_dim_float(180, 220, 930, "ones");
	float ***B = create_three_dim_float(980, 740, 160, "ones");
	float *E = create_one_dim_float(400, "ones");
	float *D = create_one_dim_float(30, "ones");

	for (int c = 2; c < 160; c++)
	  for (int b = 5; b < 216; b++)
	    for (int a = 4; a < 30; a++)
	    {
	      
	      C[a][b][c]=B[a][b][c]/D[a]+E[a];
	      C[a+2][b+4][c+4]=A[a][b][c];
	      
	      D[a]=B[a][b][c]-C[a][b][c];
	      E[a]=B[a-1][b-5][c-2]-E[a]/A[a][b][c]*D[a];
	      
	      float var_a=D[a]*0.452;
	      float var_b=D[a-4]-0.608;
	    }

    return 0;
}
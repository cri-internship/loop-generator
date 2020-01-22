#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(320, 360, "ones");
	float ***A = create_three_dim_float(320, 910, 920, "ones");
	float *D = create_one_dim_float(670, "ones");
	float ***C = create_three_dim_float(760, 260, 940, "ones");
	float ***B = create_three_dim_float(40, 170, 370, "ones");

	for (int c = 4; c < 360; c++)
	  for (int b = 1; b < 316; b++)
	    for (int a = 1; a < 316; a++)
	    {
	      
	      E[a][b]=E[a-1][b-4]/C[a][b][c];
	      
	      E[a][b]=E[a+4][b]*D[a]+A[a][b][c]-B[a][b][c];
	      
	      C[a][b][c]=D[a]-E[a][b];
	      E[a][b]=D[a+4]-B[a][b][c]*A[a][b][c];
	      
	      float var_a=D[a]*0.639;
	      float var_b=D[a+1]-0.695;
	    }

    return 0;
}
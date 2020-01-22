#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(370, 300, "zeros");
	float **A = create_two_dim_float(670, 120, "zeros");
	float ***E = create_three_dim_float(290, 530, 1000, "zeros");
	float ***B = create_three_dim_float(240, 360, 280, "zeros");
	float ***D = create_three_dim_float(160, 780, 660, "zeros");

	for (int c = 0; c < 275; c++)
	  for (int b = 0; b < 358; b++)
	    for (int a = 0; a < 239; a++)
	    {
	      
	      B[a][b][c]=B[a+1][b+2][c+5]-0.003;
	      
	      float var_a=E[a][b][c]+0.195;
	      float var_b=E[a+1][b+1][c+5]/0.658;
	    }

    return 0;
}
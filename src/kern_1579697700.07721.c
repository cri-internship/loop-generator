#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(660, 940, "ones");
	float **B = create_two_dim_float(570, 620, "ones");
	float ***C = create_three_dim_float(270, 290, 230, "ones");
	float ***A = create_three_dim_float(20, 800, 860, "ones");
	float ***E = create_three_dim_float(220, 340, 380, "ones");

	for (int c = 5; c < 230; c++)
	  for (int b = 5; b < 290; b++)
	    for (int a = 4; a < 20; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-5][c-4]*0.58;
	      
	      C[a][b][c]=C[a-3][b-1][c]+0.317;
	      
	      E[a][b][c]=E[a+4][b+3][c+2]*0.721;
	      
	      E[a][b][c]=0.93;
	      
	      float var_a=D[a][b]*0.051;
	      float var_b=D[a-1][b]-0.664;
	    }

    return 0;
}
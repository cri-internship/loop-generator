#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(110, 290, "zeros");
	float ***A = create_three_dim_float(320, 600, 510, "zeros");
	float ***C = create_three_dim_float(820, 340, 310, "zeros");
	float **B = create_two_dim_float(130, 580, "zeros");

	for (int c = 0; c < 310; c++)
	  for (int b = 4; b < 338; b++)
	    for (int a = 4; a < 130; a++)
	    {
	      
	      C[a][b][c]=C[a][b+2][c]+D[a][b]-A[a][b][c]*0.903;
	      
	      float var_a=B[a][b]*0.671;
	      float var_b=B[a-4][b-4]-0.207;
	    }

    return 0;
}
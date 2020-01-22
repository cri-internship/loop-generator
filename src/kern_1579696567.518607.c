#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(160, 340, 920, "zeros");
	float **C = create_two_dim_float(140, 130, "zeros");
	float ***D = create_three_dim_float(210, 780, 620, "zeros");
	float ***B = create_three_dim_float(960, 450, 90, "zeros");
	float **A = create_two_dim_float(180, 290, "zeros");

	for (int c = 0; c < 916; c++)
	  for (int b = 0; b < 285; b++)
	    for (int a = 0; a < 160; a++)
	    {
	      
	      A[a][b]=A[a+4][b+5]+0.561;
	      
	      E[a][b][c]=E[a][b][c+4]*A[a][b]-0.269/C[a][b];
	    }

    return 0;
}
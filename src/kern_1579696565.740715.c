#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(260, 160, 410, "ones");
	float ***C = create_three_dim_float(250, 460, 890, "ones");
	float ***B = create_three_dim_float(790, 150, 960, "ones");
	float *A = create_one_dim_float(80, "ones");

	for (int c = 0; c < 888; c++)
	  for (int b = 5; b < 458; b++)
	    for (int a = 3; a < 247; a++)
	    {
	      
	      C[a][b][c]=D[a][b][c];
	      C[a+3][b+2][c+2]=0.024;
	      
	      C[a][b][c]=0.496;
	    }

    return 0;
}
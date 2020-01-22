#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(430, "ones");
	float ***C = create_three_dim_float(760, 530, 390, "ones");
	float ***E = create_three_dim_float(890, 970, 30, "ones");
	float ***B = create_three_dim_float(50, 460, 760, "ones");
	float ***D = create_three_dim_float(930, 790, 900, "ones");

	for (int c = 0; c < 898; c++)
	  for (int b = 0; b < 788; b++)
	    for (int a = 1; a < 430; a++)
	    {
	      
	      A[a]=A[a-1]*0.443;
	      
	      D[a][b][c]=0.307;
	      D[a+1][b+2][c+2]=0.183;
	    }

    return 0;
}
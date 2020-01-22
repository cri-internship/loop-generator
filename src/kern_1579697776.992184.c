#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(740, 190, 940, "ones");
	float ***C = create_three_dim_float(370, 70, 620, "ones");
	float **A = create_two_dim_float(130, 320, "ones");
	float **B = create_two_dim_float(440, 100, "ones");
	float **E = create_two_dim_float(740, 710, "ones");

	for (int c = 0; c < 709; c++)
	  for (int b = 0; b < 739; b++)
	    for (int a = 0; a < 739; a++)
	    {
	      
	      E[a][b]=A[a][b]-B[a][b];
	      E[a+1][b+1]=C[a][b][c]*D[a][b][c]+C[a][b][c];
	    }

    return 0;
}
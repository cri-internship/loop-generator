#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(540, 240, "zeros");
	float **D = create_two_dim_float(550, 810, "zeros");
	float ***A = create_three_dim_float(180, 180, 190, "zeros");
	float **E = create_two_dim_float(170, 220, "zeros");
	float ***C = create_three_dim_float(780, 100, 690, "zeros");

	for (int c = 0; c < 187; c++)
	  for (int b = 0; b < 177; b++)
	    for (int a = 0; a < 168; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b+3][c+3]*B[a][b]/E[a][b];
	      
	      E[a][b]=E[a+2][b+5]/0.727;
	      
	      E[a][b]=0.21;
	    }

    return 0;
}
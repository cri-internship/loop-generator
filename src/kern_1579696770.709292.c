#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(830, 740, 700, "ones");
	float ***B = create_three_dim_float(150, 680, 140, "ones");
	float *E = create_one_dim_float(320, "ones");
	float ***D = create_three_dim_float(800, 1000, 10, "ones");
	float ***A = create_three_dim_float(570, 30, 490, "ones");

	for (int c = 0; c < 695; c++)
	  for (int b = 0; b < 740; b++)
	    for (int a = 0; a < 829; a++)
	    {
	      
	      A[a][b][c]=C[a][b][c]-D[a][b][c]*B[a][b][c]/E[a];
	      C[a][b][c]=C[a+1][b][c+5]*A[a][b][c]-B[a][b][c]+E[a]/A[a][b][c];
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(910, 790, 760, "zeros");
	float **D = create_two_dim_float(790, 430, "zeros");
	float ***E = create_three_dim_float(250, 680, 460, "zeros");
	float ***B = create_three_dim_float(810, 740, 110, "zeros");
	float **C = create_two_dim_float(160, 90, "zeros");

	for (int c = 0; c < 758; c++)
	  for (int b = 2; b < 90; b++)
	    for (int a = 1; a < 160; a++)
	    {
	      
	      C[a][b]=C[a-1][b-2]+A[a][b][c]*E[a][b][c]/D[a][b];
	      
	      A[a][b][c]=A[a][b+2][c+2]*0.401;
	    }

    return 0;
}
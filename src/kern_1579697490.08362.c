#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(30, 480, 930, "ones");
	float ***A = create_three_dim_float(660, 430, 280, "ones");
	float ***C = create_three_dim_float(80, 160, 510, "ones");
	float *D = create_one_dim_float(240, "ones");

	for (int c = 0; c < 510; c++)
	  for (int b = 0; b < 155; b++)
	    for (int a = 0; a < 76; a++)
	    {
	      
	      C[a][b][c]=C[a+4][b+5][c]*0.992;
	      
	      A[a][b][c]=D[a]*A[a][b][c];
	      B[a][b][c]=D[a+4]+B[a][b][c];
	    }

    return 0;
}
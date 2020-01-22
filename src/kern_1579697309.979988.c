#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(60, 110, 720, "zeros");
	float *E = create_one_dim_float(10, "zeros");
	float ***A = create_three_dim_float(720, 30, 130, "zeros");
	float ***B = create_three_dim_float(180, 260, 480, "zeros");
	float **D = create_two_dim_float(820, 320, "zeros");

	for (int c = 1; c < 10; c++)
	  for (int b = 1; b < 10; b++)
	    for (int a = 1; a < 10; a++)
	    {
	      
	      A[a][b][c]=E[a]-A[a][b][c];
	      B[a][b][c]=E[a-1]-0.03/B[a][b][c];
	    }

    return 0;
}
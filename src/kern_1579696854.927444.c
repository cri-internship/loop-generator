#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(970, 90, 740, "zeros");
	double ***A = create_three_dim_double(500, 590, 800, "zeros");

	for (int c = 3; c < 740; c++)
	  for (int b = 0; b < 90; b++)
	    for (int a = 0; a < 496; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b+2][c+3]-0.741;
	      
	      A[a][b][c]=B[a][b][c]*A[a][b][c];
	      B[a][b][c]=B[a][b][c-3]/A[a][b][c];
	    }

    return 0;
}
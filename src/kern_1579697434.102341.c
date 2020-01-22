#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(690, "zeros");
	float ***A = create_three_dim_float(570, 600, 390, "zeros");

	for (int c = 0; c < 386; c++)
	  for (int b = 0; b < 597; b++)
	    for (int a = 0; a < 567; a++)
	    {
	      
	      A[a][b][c]=A[a][b+3][c]+0.875;
	      
	      B[a]=A[a][b][c]-B[a];
	      A[a][b][c]=A[a+3][b+3][c+4]-B[a];
	    }

    return 0;
}
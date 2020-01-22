#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(400, "zeros");
	double *B = create_one_dim_double(450, "zeros");
	double ***A = create_three_dim_double(300, 930, 530, "zeros");

	for (int c = 0; c < 529; c++)
	  for (int b = 0; b < 928; b++)
	    for (int a = 0; a < 295; a++)
	    {
	      
	      A[a][b][c]=A[a+5][b+2][c+1]*0.741;
	      
	      A[a][b][c]=B[a]+C[a];
	    }

    return 0;
}
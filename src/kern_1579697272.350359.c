#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(370, 530, "zeros");
	double ***B = create_three_dim_double(710, 990, 360, "zeros");
	double **A = create_two_dim_double(710, 230, "zeros");

	for (int c = 0; c < 356; c++)
	  for (int b = 0; b < 525; b++)
	    for (int a = 0; a < 367; a++)
	    {
	      
	      C[a][b]=A[a][b];
	      C[a+3][b+5]=B[a][b][c];
	      
	      B[a][b][c]=C[a][b];
	      B[a+4][b][c+4]=0.041;
	    }

    return 0;
}
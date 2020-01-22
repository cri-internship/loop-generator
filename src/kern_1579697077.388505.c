#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(540, 130, 580, "zeros");
	double *A = create_one_dim_double(580, "zeros");
	double *C = create_one_dim_double(530, "zeros");

	for (int c = 3; c < 576; c++)
	  for (int b = 4; b < 129; b++)
	    for (int a = 4; a < 525; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-4][c-3]-0.586;
	      
	      B[a][b][c]=B[a][b+1][c+4]/C[a]+A[a];
	      
	      A[a]=A[a+5]+0.951;
	      
	      B[a][b][c]=C[a]*B[a][b][c]+B[a][b][c];
	      A[a]=C[a+5]-B[a][b][c];
	    }

    return 0;
}
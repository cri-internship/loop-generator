#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(500, "zeros");
	double ***B = create_three_dim_double(470, 600, 370, "zeros");

	for (int c = 1; c < 366; c++)
	  for (int b = 4; b < 596; b++)
	    for (int a = 2; a < 466; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-4][c-1]+0.623;
	      
	      B[a][b][c]=B[a+3][b+4][c+1]/A[a];
	      
	      B[a][b][c]=B[a][b+1][c+4]-0.138;
	      
	      B[a][b][c]=B[a+4][b+3][c]+A[a];
	      
	      B[a][b][c]=B[a][b][c]+A[a];
	      A[a]=B[a-2][b-2][c]*A[a];
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(920, "ones");
	double ***B = create_three_dim_double(730, 50, 10, "ones");
	double ***A = create_three_dim_double(320, 340, 620, "ones");
	double *C = create_one_dim_double(870, "ones");

	for (int c = 5; c < 620; c++)
	  for (int b = 1; b < 340; b++)
	    for (int a = 3; a < 320; a++)
	    {
	      
	      D[a]=B[a][b][c]+0.822;
	      D[a-1]=C[a]/C[a]*A[a][b][c];
	      
	      A[a][b][c]=0.176;
	      A[a-3][b-1][c-5]=0.928;
	    }

    return 0;
}
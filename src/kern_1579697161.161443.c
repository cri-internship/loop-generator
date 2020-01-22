#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(310, 660, "ones");
	double *C = create_one_dim_double(40, "ones");
	double ***D = create_three_dim_double(890, 740, 940, "ones");
	double ***A = create_three_dim_double(510, 640, 800, "ones");
	double ***E = create_three_dim_double(820, 610, 130, "ones");

	for (int c = 4; c < 940; c++)
	  for (int b = 5; b < 660; b++)
	    for (int a = 4; a < 310; a++)
	    {
	      
	      D[a][b][c]=0.666+E[a][b][c];
	      D[a-4][b-1][c-4]=A[a][b][c]/C[a]*E[a][b][c];
	      
	      B[a][b]=0.969;
	      B[a-3][b-5]=0.576;
	    }

    return 0;
}
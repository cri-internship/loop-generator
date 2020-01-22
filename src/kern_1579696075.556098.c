#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(980, 840, "zeros");
	double **D = create_two_dim_double(280, 370, "zeros");
	double ***C = create_three_dim_double(240, 840, 50, "zeros");
	double ***B = create_three_dim_double(300, 900, 710, "zeros");

	for (int c = 3; c < 50; c++)
	  for (int b = 1; b < 369; b++)
	    for (int a = 3; a < 240; a++)
	    {
	      
	      C[a][b][c]=C[a-2][b-1][c]-0.523;
	      
	      B[a][b][c]=B[a][b][c+4]+C[a][b][c]*D[a][b];
	      
	      D[a][b]=D[a+3][b+1]/B[a][b][c];
	      
	      D[a][b]=C[a][b][c]-0.844/A[a][b];
	      B[a][b][c]=C[a-3][b-1][c-3]-0.045/B[a][b][c];
	    }

    return 0;
}
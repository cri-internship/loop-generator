#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(780, "zeros");
	double ***A = create_three_dim_double(520, 740, 360, "zeros");
	double ***D = create_three_dim_double(10, 350, 720, "zeros");
	double *B = create_one_dim_double(740, "zeros");

	for (int c = 2; c < 716; c++)
	  for (int b = 1; b < 346; b++)
	    for (int a = 4; a < 9; a++)
	    {
	      
	      D[a][b][c]=D[a-2][b-1][c-2]+B[a]/C[a];
	      
	      D[a][b][c]=D[a+1][b+4][c+4]-A[a][b][c];
	      
	      B[a]=0.395;
	      B[a]=0.1;
	      
	      D[a][b][c]=C[a]+D[a][b][c]-D[a][b][c];
	      B[a]=C[a-4]*D[a][b][c]-B[a]/A[a][b][c];
	    }

    return 0;
}
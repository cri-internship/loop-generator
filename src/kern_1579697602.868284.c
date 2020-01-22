#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(640, 100, 390, "zeros");
	double *A = create_one_dim_double(760, "zeros");
	double ***C = create_three_dim_double(860, 690, 80, "zeros");
	double ***B = create_three_dim_double(500, 870, 950, "zeros");

	for (int c = 5; c < 78; c++)
	  for (int b = 4; b < 685; b++)
	    for (int a = 4; a < 500; a++)
	    {
	      
	      A[a]=A[a-2]/0.777+B[a][b][c];
	      
	      B[a][b][c]=B[a-4][b-4][c-5]-0.968;
	      
	      C[a][b][c]=C[a+3][b+2][c+2]/A[a]*A[a]+B[a][b][c];
	      
	      C[a][b][c]=0.49;
	      
	      D[a][b][c]=A[a]+C[a][b][c]-B[a][b][c]*D[a][b][c];
	      C[a][b][c]=A[a-1]/C[a][b][c]+D[a][b][c];
	    }

    return 0;
}
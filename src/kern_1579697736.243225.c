#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(10, 890, "zeros");
	double ***C = create_three_dim_double(640, 360, 760, "zeros");
	double ***D = create_three_dim_double(170, 70, 240, "zeros");
	double **E = create_two_dim_double(460, 260, "zeros");
	double *B = create_one_dim_double(250, "zeros");

	for (int c = 0; c < 239; c++)
	  for (int b = 4; b < 67; b++)
	    for (int a = 4; a < 10; a++)
	    {
	      
	      D[a][b][c]=D[a+5][b+3][c+1]+0.122;
	      
	      B[a]=B[a+1]/A[a][b]+C[a][b][c];
	      
	      A[a][b]=A[a][b+1]/0.052;
	      
	      E[a][b]=E[a+1][b+4]*0.376;
	      
	      E[a][b]=D[a][b][c]+B[a]-C[a][b][c]/B[a];
	    }

    return 0;
}
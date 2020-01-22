#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(120, "zeros");
	double **D = create_two_dim_double(570, 400, "zeros");
	double ***A = create_three_dim_double(640, 60, 100, "zeros");
	double **B = create_two_dim_double(260, 720, "zeros");
	double **E = create_two_dim_double(480, 740, "zeros");

	for (int c = 0; c < 95; c++)
	  for (int b = 0; b < 56; b++)
	    for (int a = 0; a < 120; a++)
	    {
	      
	      C[a]=0.808;
	      float  var_a=C[a]+0.815;
	      
	      A[a][b][c]=A[a+4][b+3][c+1]/0.753;
	      
	      D[a][b]=D[a][b+2]-0.682;
	      
	      B[a][b]=B[a+4][b+4]+0.82;
	      
	      A[a][b][c]=A[a+1][b+2][c+2]*0.649;
	      
	      E[a][b]=A[a][b][c]/0.071+E[a][b];
	      C[a]=A[a+4][b+1][c+5]*D[a][b]/B[a][b];
	      
	      A[a][b][c]=A[a][b][c]-C[a];
	      D[a][b]=A[a+1][b+4][c+5]*E[a][b]-0.348+B[a][b];
	    }

    return 0;
}
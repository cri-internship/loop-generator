#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(130, 540, "zeros");
	double ***B = create_three_dim_double(950, 950, 300, "zeros");
	double **C = create_two_dim_double(800, 120, "zeros");
	double **A = create_two_dim_double(640, 210, "zeros");
	double **D = create_two_dim_double(860, 820, "zeros");

	for (int c = 0; c < 296; c++)
	  for (int b = 4; b < 120; b++)
	    for (int a = 5; a < 126; a++)
	    {
	      
	      C[a][b]=C[a-5][b-3]*0.805;
	      
	      B[a][b][c]=B[a-3][b][c]+0.696;
	      
	      A[a][b]=B[a][b][c]+C[a][b]-D[a][b]/E[a][b];
	      A[a-2][b-4]=B[a][b][c]+E[a][b]/C[a][b]-D[a][b];
	      
	      B[a][b][c]=0.487+A[a][b];
	      
	      D[a][b]=E[a][b]+A[a][b]*B[a][b][c]/D[a][b];
	      A[a][b]=E[a+4][b+4]-C[a][b]*A[a][b]/D[a][b]+B[a][b][c];
	    }

    return 0;
}
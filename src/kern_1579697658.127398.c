#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(710, 70, "ones");
	double ***B = create_three_dim_double(250, 690, 190, "ones");
	double **E = create_two_dim_double(200, 580, "ones");
	double ***D = create_three_dim_double(240, 490, 360, "ones");
	double **A = create_two_dim_double(680, 350, "ones");

	for (int c = 0; c < 358; c++)
	  for (int b = 4; b < 70; b++)
	    for (int a = 4; a < 238; a++)
	    {
	      
	      A[a][b]=A[a][b-1]-D[a][b][c]*0.381;
	      
	      D[a][b][c]=D[a+2][b+1][c+2]-C[a][b]+A[a][b]/E[a][b];
	      
	      D[a][b][c]=D[a+2][b+5][c+2]/A[a][b];
	      
	      C[a][b]=D[a][b][c]/B[a][b][c]+0.714-E[a][b];
	      C[a-2][b-3]=E[a][b]*A[a][b]-D[a][b][c]+B[a][b][c];
	      
	      double var_a=D[a][b][c]+0.833;
	      double var_b=D[a-4][b-4][c]+0.373;
	      
	      A[a][b]=C[a][b]-B[a][b][c]*0.362;
	      E[a][b]=C[a-3][b-1]+0.218;
	    }

    return 0;
}
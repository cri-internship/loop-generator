#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(750, 370, "zeros");
	float **D = create_two_dim_float(920, 130, "zeros");
	float ***C = create_three_dim_float(840, 140, 730, "zeros");
	float **E = create_two_dim_float(1000, 730, "zeros");
	float **B = create_two_dim_float(720, 20, "zeros");

	for (int c = 2; c < 725; c++)
	  for (int b = 4; b < 20; b++)
	    for (int a = 3; a < 717; a++)
	    {
	      
	      C[a][b][c]=C[a][b-1][c-1]/0.663;
	      
	      B[a][b]=B[a][b-4]-C[a][b][c]+E[a][b]/A[a][b];
	      
	      A[a][b]=B[a][b];
	      E[a][b]=A[a][b]-B[a][b]/C[a][b][c]*D[a][b]+E[a][b];
	      
	      A[a][b]=A[a+2][b]-B[a][b]/D[a][b]*E[a][b]+C[a][b][c];
	      
	      B[a][b]=B[a+3][b]/C[a][b][c]*D[a][b];
	      
	      C[a][b][c]=0.175;
	      
	      D[a][b]=C[a][b][c]+E[a][b]*D[a][b]-B[a][b];
	      A[a][b]=C[a][b+5][c+5]/B[a][b]*A[a][b]-D[a][b];
	    }

    return 0;
}
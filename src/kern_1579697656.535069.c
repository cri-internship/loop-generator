#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(340, 910, 620, "ones");
	double **C = create_two_dim_double(320, 960, "ones");
	double **B = create_two_dim_double(590, 580, "ones");
	double **D = create_two_dim_double(620, 810, "ones");

	for (int c = 4; c < 616; c++)
	  for (int b = 4; b < 580; b++)
	    for (int a = 4; a < 320; a++)
	    {
	      
	      C[a][b]=C[a-4][b-4]+0.474;
	      
	      B[a][b]=B[a+5][b]-0.347;
	      
	      D[a][b]=D[a+1][b+3]-0.117;
	      
	      A[a][b][c]=C[a][b]-B[a][b]/D[a][b];
	      A[a+5][b][c+2]=B[a][b]*D[a][b];
	      
	      A[a][b][c]=0.749;
	      
	      B[a][b]=C[a][b]*A[a][b][c];
	      A[a][b][c]=C[a-4][b-1]+B[a][b]/D[a][b]-A[a][b][c];
	      
	      C[a][b]=A[a][b][c]*B[a][b];
	      D[a][b]=A[a-4][b-2][c-4]-B[a][b]/C[a][b];
	    }

    return 0;
}
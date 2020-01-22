#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(970, 880, "zeros");
	double **B = create_two_dim_double(510, 970, "zeros");
	double ***C = create_three_dim_double(770, 620, 810, "zeros");
	double **E = create_two_dim_double(640, 440, "zeros");
	double **D = create_two_dim_double(340, 180, "zeros");

	for (int c = 5; c < 808; c++)
	  for (int b = 3; b < 180; b++)
	    for (int a = 2; a < 339; a++)
	    {
	      
	      D[a][b]=D[a][b-2]-0.862;
	      
	      D[a][b]=D[a+1][b]-0.905;
	      
	      C[a][b][c]=E[a][b]+A[a][b]/B[a][b];
	      C[a+3][b][c+2]=D[a][b]+D[a][b];
	      
	      C[a][b][c]=0.542;
	      
	      double var_a=D[a][b]/0.422;
	      
	      E[a][b]=E[a][b]/C[a][b][c]-D[a][b]+B[a][b];
	      D[a][b]=E[a][b-1]*0.351;
	    }

    return 0;
}
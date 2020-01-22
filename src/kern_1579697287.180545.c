#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(300, 920, 380, "ones");
	double *D = create_one_dim_double(360, "ones");
	double ***B = create_three_dim_double(370, 510, 130, "ones");
	double ***E = create_three_dim_double(410, 440, 630, "ones");
	double **C = create_two_dim_double(550, 610, "ones");

	for (int c = 3; c < 130; c++)
	  for (int b = 4; b < 440; b++)
	    for (int a = 5; a < 300; a++)
	    {
	      
	      E[a][b][c]=E[a-5][b-3][c]+0.087;
	      
	      E[a][b][c]=E[a-4][b-1][c-2]-D[a]/B[a][b][c]*C[a][b];
	      
	      B[a][b][c]=B[a-2][b-4][c-1]*0.869;
	      
	      A[a][b][c]=A[a-4][b-4][c-3]+0.919;
	      
	      A[a][b][c]=A[a][b+2][c+2]+E[a][b][c];
	      
	      D[a]=0.276;
	      D[a+4]=0.247;
	    }

    return 0;
}
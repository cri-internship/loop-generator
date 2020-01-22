#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(740, "ones");
	double ***D = create_three_dim_double(900, 720, 640, "ones");
	double ***C = create_three_dim_double(890, 250, 870, "ones");
	double ***A = create_three_dim_double(520, 350, 400, "ones");
	double **E = create_two_dim_double(100, 700, "ones");

	for (int d = 4; d < 396; d++)
	  for (int c = 4; c < 246; c++)
	    for (int b = 1; b < 515; b++)
	      for (int a = 1; a < 515; a++)
	      {
	        
	       C[a][b][c]=C[a][b-4][c-1]/0.416;
	        
	       D[a][b][c]=D[a-1][b-4][c-4]*E[a][b]-C[a][b][c]+B[a];
	        
	       C[a][b][c]=C[a+3][b+4][c+5]/D[a][b][c];
	        
	       A[a][b][c]=0.565;
	       A[a+5][b+2][c+4]=0.158;
	        
	       C[a][b][c]=D[a][b][c]+A[a][b][c];
	       D[a][b][c]=D[a+4][b+4][c+1]/0.607;
	      }

    return 0;
}
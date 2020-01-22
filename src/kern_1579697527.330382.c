#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(40, 590, 90, "zeros");
	double ***B = create_three_dim_double(190, 800, 350, "zeros");
	double *A = create_one_dim_double(870, "zeros");
	double ***C = create_three_dim_double(990, 230, 460, "zeros");
	double **D = create_two_dim_double(140, 910, "zeros");

	for (int d = 0; d < 347; d++)
	  for (int c = 0; c < 225; c++)
	    for (int b = 0; b < 139; b++)
	      for (int a = 0; a < 139; a++)
	      {
	        
	       D[a][b]=D[a+1][b+1]-C[a][b][c]/A[a]+E[a][b][c];
	        
	       C[a][b][c]=B[a][b][c];
	       C[a+5][b+5][c+5]=D[a][b]+A[a]/E[a][b][c]*B[a][b][c];
	        
	       B[a][b][c]=0.659;
	       B[a+4][b+4][c+3]=0.258;
	      }

    return 0;
}
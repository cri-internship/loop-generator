#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(360, 710, 880, "zeros");
	double *A = create_one_dim_double(900, "zeros");
	double *B = create_one_dim_double(70, "zeros");
	double ***E = create_three_dim_double(290, 900, 410, "zeros");
	double *C = create_one_dim_double(390, "zeros");

	for (int d = 0; d < 409; d++)
	  for (int c = 5; c < 706; c++)
	    for (int b = 3; b < 289; b++)
	      for (int a = 3; a < 289; a++)
	      {
	        
	       E[a][b][c]=E[a+1][b+4][c+1]*A[a]/C[a]+B[a];
	        
	       D[a][b][c]=E[a][b][c]/E[a][b][c]-B[a];
	       D[a+2][b+1][c]=0.59*B[a]+E[a][b][c];
	        
	       E[a][b][c]=0.131;
	        
	       A[a]=D[a][b][c]/C[a]*A[a]+B[a]-0.447;
	       E[a][b][c]=D[a+5][b+4][c+2]-A[a]/E[a][b][c]+B[a];
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(150, 210, "zeros");
	double ***E = create_three_dim_double(520, 560, 170, "zeros");
	double ***A = create_three_dim_double(490, 990, 850, "zeros");
	double **D = create_two_dim_double(940, 480, "zeros");
	double **C = create_two_dim_double(940, 940, "zeros");

	for (int d = 0; d < 846; d++)
	  for (int c = 0; c < 208; c++)
	    for (int b = 0; b < 149; b++)
	      for (int a = 0; a < 149; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b+5][c+4]/B[a][b]*C[a][b]-D[a][b]+E[a][b][c];
	        
	       B[a][b]=B[a+1][b+2]-A[a][b][c]+E[a][b][c]/D[a][b];
	        
	       A[a][b][c]=E[a][b][c]*D[a][b];
	      }

    return 0;
}
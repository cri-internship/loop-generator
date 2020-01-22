#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(540, 650, "ones");
	double ***E = create_three_dim_double(790, 910, 720, "ones");
	double **D = create_two_dim_double(690, 620, "ones");
	double **A = create_two_dim_double(1000, 80, "ones");
	double **B = create_two_dim_double(230, 770, "ones");

	for (int d = 0; d < 716; d++)
	  for (int c = 5; c < 80; c++)
	    for (int b = 2; b < 537; b++)
	      for (int a = 2; a < 537; a++)
	      {
	        
	       A[a][b]=A[a-2][b-4]+E[a][b][c];
	        
	       C[a][b]=C[a-2][b-5]*B[a][b];
	        
	       C[a][b]=C[a+3][b+5]/0.295;
	        
	       C[a][b]=E[a][b][c]*D[a][b]-C[a][b]/A[a][b];
	       D[a][b]=E[a+1][b+5][c+4]-A[a][b]/D[a][b];
	      }

    return 0;
}
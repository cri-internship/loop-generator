#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(170, 650, 800, "zeros");
	double ***C = create_three_dim_double(770, 940, 60, "zeros");
	double **B = create_two_dim_double(920, 230, "zeros");
	double ***D = create_three_dim_double(20, 430, 440, "zeros");
	double *A = create_one_dim_double(280, "zeros");

	for (int d = 5; d < 60; d++)
	  for (int c = 2; c < 940; c++)
	    for (int b = 5; b < 770; b++)
	      for (int a = 5; a < 770; a++)
	      {
	        
	       C[a][b][c]=0.921*B[a][b]/D[a][b][c]+A[a];
	       C[a-5][b-2][c-5]=E[a][b][c]-D[a][b][c]+A[a];
	      }

    return 0;
}
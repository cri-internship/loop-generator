#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(950, 960, "random");
	double ***A = create_three_dim_double(390, 670, 960, "random");
	double ***E = create_three_dim_double(860, 170, 910, "random");
	double **B = create_two_dim_double(10, 1000, "random");
	double **D = create_two_dim_double(790, 470, "random");

	for (int d = 0; d < 958; d++)
	  for (int c = 4; c < 667; c++)
	    for (int b = 3; b < 10; b++)
	      for (int a = 3; a < 10; a++)
	      {
	        
	       B[a][b]=B[a-3][b-3]-0.244;
	        
	       B[a][b]=0.19;
	        
	       A[a][b][c]=0.029;
	       A[a+1][b+3][c+2]=0.722;
	        
	       A[a][b][c]=C[a][b]*B[a][b]/A[a][b][c]-D[a][b]+E[a][b][c];
	       C[a][b]=C[a+3][b+3]*B[a][b]/D[a][b];
	      }

    return 0;
}
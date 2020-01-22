#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(560, 210, 40, "random");
	double ***D = create_three_dim_double(960, 1000, 580, "random");
	double **C = create_two_dim_double(540, 490, "random");
	double *A = create_one_dim_double(110, "random");
	double **E = create_two_dim_double(790, 730, "random");

	for (int d = 0; d < 578; d++)
	  for (int c = 2; c < 490; c++)
	    for (int b = 5; b < 106; b++)
	      for (int a = 5; a < 106; a++)
	      {
	        
	       C[a][b]=C[a-2][b]-0.806;
	        
	       A[a]=0.933;
	       A[a+4]=E[a][b];
	        
	       B[a][b][c]=D[a][b][c]*A[a];
	       D[a][b][c]=D[a+5][b+4][c+2]*B[a][b][c]-0.462/B[a][b][c];
	        
	       C[a][b]=E[a][b]/D[a][b][c]-0.545;
	       E[a][b]=E[a-5][b-2]-D[a][b][c]*C[a][b]/B[a][b][c]+A[a];
	      }

    return 0;
}
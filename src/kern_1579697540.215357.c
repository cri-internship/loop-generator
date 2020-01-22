#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(850, 220, "random");
	double *B = create_one_dim_double(60, "random");
	double ***C = create_three_dim_double(890, 690, 560, "random");
	double ***A = create_three_dim_double(220, 440, 460, "random");
	double *D = create_one_dim_double(450, "random");

	for (int d = 5; d < 455; d++)
	  for (int c = 3; c < 220; c++)
	    for (int b = 5; b < 56; b++)
	      for (int a = 5; a < 56; a++)
	      {
	        
	       E[a][b]=E[a][b-1]+0.775/D[a];
	        
	       D[a]=0.891;
	       float  var_a=D[a]+0.046;
	        
	       A[a][b][c]=A[a][b+1][c+3]/0.899;
	        
	       B[a]=B[a+4]*0.965;
	        
	       A[a][b][c]=E[a][b]*C[a][b][c]-0.994;
	        
	       D[a]=0.77;
	        
	       C[a][b][c]=C[a][b][c]*0.935;
	       E[a][b]=C[a-1][b-3][c-5]+A[a][b][c]-D[a]/E[a][b]*B[a];
	      }

    return 0;
}
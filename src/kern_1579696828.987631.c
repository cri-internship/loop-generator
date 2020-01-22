#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(210, 260, "random");
	double ***E = create_three_dim_double(290, 50, 180, "random");
	double ***B = create_three_dim_double(200, 840, 430, "random");
	double *D = create_one_dim_double(590, "random");
	double **C = create_two_dim_double(220, 460, "random");

	for (int d = 1; d < 180; d++)
	  for (int c = 4; c < 50; c++)
	    for (int b = 5; b < 197; b++)
	      for (int a = 5; a < 197; a++)
	      {
	        
	       C[a][b]=C[a-5][b-3]*0.557;
	        
	       E[a][b][c]=E[a-4][b-4][c-1]+A[a][b]/C[a][b]-D[a]*B[a][b][c];
	        
	       D[a]=D[a+1]-0.9;
	        
	       C[a][b]=C[a+5][b+5]+0.935;
	        
	       B[a][b][c]=B[a+3][b+3][c+2]+0.703;
	        
	       D[a]=C[a][b]+E[a][b][c]/B[a][b][c]-D[a];
	       C[a][b]=C[a-4][b-2]*A[a][b]/D[a]-B[a][b][c]+E[a][b][c];
	        
	       B[a][b][c]=B[a][b][c]/A[a][b]*C[a][b];
	       E[a][b][c]=B[a-5][b][c-1]/D[a]-C[a][b]+E[a][b][c]*A[a][b];
	      }

    return 0;
}
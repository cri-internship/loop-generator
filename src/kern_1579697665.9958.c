#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(430, 100, 140, "random");
	double ***C = create_three_dim_double(120, 890, 480, "random");
	double **D = create_two_dim_double(400, 910, "random");
	double *E = create_one_dim_double(990, "random");
	double **A = create_two_dim_double(460, 180, "random");

	for (int d = 0; d < 135; d++)
	  for (int c = 1; c < 99; c++)
	    for (int b = 4; b < 118; b++)
	      for (int a = 4; a < 118; a++)
	      {
	        
	       E[a]=E[a-1]-0.604;
	        
	       A[a][b]=A[a-4][b]+D[a][b]-E[a]/C[a][b][c]*B[a][b][c];
	        
	       B[a][b][c]=A[a][b]+C[a][b][c];
	       B[a+3][b][c+5]=E[a]-A[a][b]+C[a][b][c]*D[a][b];
	        
	       D[a][b]=C[a][b][c]+E[a];
	       E[a]=C[a+2][b+2][c+4]*B[a][b][c]-A[a][b]+D[a][b]/E[a];
	        
	       B[a][b][c]=D[a][b]-B[a][b][c]*A[a][b]+C[a][b][c];
	       C[a][b][c]=D[a-3][b-1]*A[a][b]/B[a][b][c]-C[a][b][c]+E[a];
	        
	       double var_a=B[a][b][c]*0.856;
	       double var_b=B[a+5][b+1][c+1]+0.816;
	      }

    return 0;
}
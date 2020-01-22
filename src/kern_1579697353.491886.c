#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(530, "random");
	double *A = create_one_dim_double(140, "random");
	double **E = create_two_dim_double(30, 500, "random");
	double **B = create_two_dim_double(940, 580, "random");
	double ***D = create_three_dim_double(740, 480, 50, "random");

	for (int d = 0; d < 50; d++)
	  for (int c = 4; c < 480; c++)
	    for (int b = 3; b < 25; b++)
	      for (int a = 3; a < 25; a++)
	      {
	        
	       A[a]=A[a-3]/E[a][b]*B[a][b]+C[a];
	        
	       B[a][b]=B[a+3][b]-A[a]*D[a][b][c]/D[a][b][c];
	        
	       E[a][b]=0.83;
	       E[a][b-1]=0.179;
	        
	       D[a][b][c]=E[a][b]-0.603+D[a][b][c]/A[a];
	       B[a][b]=E[a+5][b+1]/B[a][b]+C[a];
	        
	       C[a]=B[a][b]-E[a][b]*D[a][b][c];
	       E[a][b]=B[a-3][b-4]/D[a][b][c]*C[a]+A[a];
	        
	       double var_a=C[a]/0.674;
	       double var_b=C[a+2]/0.667;
	        
	       double var_c=D[a][b][c]*0.89;
	       double var_d=D[a-2][b-3][c]+0.723;
	      }

    return 0;
}
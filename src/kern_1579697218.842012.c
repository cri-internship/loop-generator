#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(530, 910, 290, "ones");
	double *A = create_one_dim_double(780, "ones");
	double **C = create_two_dim_double(390, 940, "ones");
	double **B = create_two_dim_double(140, 210, "ones");
	double **D = create_two_dim_double(580, 200, "ones");

	for (int d = 0; d < 288; d++)
	  for (int c = 5; c < 198; c++)
	    for (int b = 2; b < 390; b++)
	      for (int a = 2; a < 390; a++)
	      {
	        
	       C[a][b]=C[a-2][b-2]+B[a][b]*D[a][b]-A[a];
	        
	       E[a][b][c]=E[a+2][b+4][c+2]/0.112;
	        
	       D[a][b]=D[a+2][b+2]*0.619;
	        
	       A[a]=C[a][b]*E[a][b][c]-E[a][b][c];
	       A[a+4]=0.242;
	        
	       D[a][b]=A[a]/D[a][b]-C[a][b]+0.794;
	       E[a][b][c]=A[a+4]*E[a][b][c]/B[a][b]+D[a][b];
	        
	       A[a]=D[a][b]/C[a][b]+A[a]*E[a][b][c]-B[a][b];
	       C[a][b]=D[a-1][b-5]+A[a]*C[a][b];
	        
	       double var_a=E[a][b][c]+0.806;
	       double var_b=E[a+2][b][c+1]/0.282;
	      }

    return 0;
}
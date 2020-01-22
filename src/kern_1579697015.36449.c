#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(960, 110, 930, "random");
	double **D = create_two_dim_double(390, 740, "random");
	double **B = create_two_dim_double(610, 70, "random");
	double *A = create_one_dim_double(370, "random");

	for (int d = 3; d < 930; d++)
	  for (int c = 3; c < 67; c++)
	    for (int b = 4; b < 367; b++)
	      for (int a = 4; a < 367; a++)
	      {
	        
	       D[a][b]=D[a-1][b-2]/0.831;
	        
	       B[a][b]=D[a][b]-A[a];
	       B[a+4][b+3]=C[a][b][c]*D[a][b]/C[a][b][c];
	        
	       A[a]=A[a]+B[a][b]*B[a][b];
	       C[a][b][c]=A[a+1]-0.792/C[a][b][c];
	        
	       D[a][b]=A[a]*C[a][b][c];
	       B[a][b]=A[a+3]+D[a][b]/C[a][b][c]*B[a][b];
	        
	       double var_a=C[a][b][c]+0.605;
	       double var_b=C[a-3][b-2][c-3]/0.065;
	        
	       double var_c=B[a][b]/0.527;
	       double var_d=B[a-4][b-3]*0.647;
	      }

    return 0;
}
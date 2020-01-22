#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(630, "random");
	double ***C = create_three_dim_double(300, 770, 50, "random");
	double *A = create_one_dim_double(530, "random");
	double **E = create_two_dim_double(760, 670, "random");
	double ***D = create_three_dim_double(40, 620, 950, "random");

	for (int d = 4; d < 49; d++)
	  for (int c = 4; c < 620; c++)
	    for (int b = 4; b < 36; b++)
	      for (int a = 4; a < 36; a++)
	      {
	        
	       D[a][b][c]=D[a-3][b-4][c-4]+0.859;
	        
	       double var_a=A[a]*0.036;
	       A[a]=0.743;
	        
	       E[a][b]=E[a+3][b+5]*0.425;
	        
	       D[a][b][c]=D[a+4][b][c+3]*0.256;
	        
	       double var_b=C[a][b][c]+0.519;
	       double var_c=C[a-4][b][c]*0.723;
	        
	       D[a][b][c]=C[a][b][c]-B[a]/A[a]+D[a][b][c];
	       B[a]=C[a+5][b+5][c+1]+E[a][b]-E[a][b]/B[a];
	        
	       double var_d=C[a][b][c]/0.314;
	       double var_e=C[a+1][b][c+1]*0.642;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(990, 860, 890, "random");
	double ***B = create_three_dim_double(280, 400, 110, "random");
	double **A = create_two_dim_double(500, 840, "random");
	double **E = create_two_dim_double(560, 470, "random");
	double *C = create_one_dim_double(880, "random");

	for (int d = 5; d < 109; d++)
	  for (int c = 2; c < 395; c++)
	    for (int b = 0; b < 276; b++)
	      for (int a = 0; a < 276; a++)
	      {
	        
	       B[a][b][c]=B[a+4][b+5][c+1]/0.615;
	        
	       D[a][b][c]=D[a][b+2][c+5]*0.77;
	        
	       C[a]=B[a][b][c]+E[a][b]*0.713;
	       C[a+2]=A[a][b]+D[a][b][c]*E[a][b]-B[a][b][c];
	        
	       double var_a=E[a][b]/0.972;
	       double var_b=E[a][b+3]*0.456;
	        
	       C[a]=D[a][b][c]/C[a]+E[a][b]-C[a];
	       D[a][b][c]=D[a][b-2][c-5]/C[a]*B[a][b][c]-A[a][b];
	      }

    return 0;
}
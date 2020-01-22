#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(800, 430, "ones");
	double *B = create_one_dim_double(300, "ones");
	double *E = create_one_dim_double(130, "ones");
	double ***D = create_three_dim_double(320, 200, 980, "ones");
	double ***C = create_three_dim_double(200, 770, 910, "ones");

	for (int d = 2; d < 910; d++)
	  for (int c = 5; c < 200; c++)
	    for (int b = 4; b < 125; b++)
	      for (int a = 4; a < 125; a++)
	      {
	        
	       B[a]=B[a-1]/E[a]*D[a][b][c];
	        
	       B[a]=B[a-4]-A[a][b]*0.688;
	        
	       C[a][b][c]=C[a-2][b-5][c]-0.51*A[a][b];
	        
	       double var_a=D[a][b][c]+0.354;
	       double var_b=D[a-1][b-3][c-2]-0.394;
	        
	       double var_c=D[a][b][c]-0.551;
	       double var_d=D[a-4][b-3][c-2]-0.894;
	        
	       double var_e=E[a]/0.866;
	       double var_f=E[a+5]/0.002;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(270, 70, 310, "random");
	double ***E = create_three_dim_double(740, 420, 100, "random");
	double **B = create_two_dim_double(250, 80, "random");
	double *C = create_one_dim_double(310, "random");
	double ***D = create_three_dim_double(670, 10, 820, "random");

	for (int d = 2; d < 96; d++)
	  for (int c = 5; c < 10; c++)
	    for (int b = 5; b < 265; b++)
	      for (int a = 5; a < 265; a++)
	      {
	        
	       D[a][b][c]=D[a-1][b-2][c-1]/B[a][b];
	        
	       C[a]=C[a-5]*D[a][b][c]+A[a][b][c]-E[a][b][c]/D[a][b][c];
	        
	       D[a][b][c]=D[a-2][b-5][c]*0.247;
	        
	       E[a][b][c]=E[a+4][b+1][c+4]-0.002;
	        
	       double var_a=A[a][b][c]-0.909;
	       double var_b=A[a+5][b+4][c+4]*0.17;
	        
	       double var_c=E[a][b][c]/0.567;
	       double var_d=E[a-2][b-1][c-2]*0.437;
	      }

    return 0;
}
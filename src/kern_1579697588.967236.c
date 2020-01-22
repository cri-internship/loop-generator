#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(560, "zeros");
	double **A = create_two_dim_double(850, 60, "zeros");
	double ***B = create_three_dim_double(530, 250, 660, "zeros");

	for (int c = 3; c < 660; c++)
	  for (int b = 5; b < 57; b++)
	    for (int a = 4; a < 530; a++)
	    {
	      
	      C[a]=C[a-2]+0.668;
	      
	      A[a][b]=A[a-4][b-2]+0.985;
	      
	      A[a][b]=A[a+2][b+3]-0.651;
	      
	      B[a][b][c]=0.288;
	      B[a-2][b-5][c-3]=0.51;
	      
	      double var_a=B[a][b][c]-0.988;
	      double var_b=B[a-1][b-3][c]/0.199;
	      
	      double var_c=A[a][b]/0.009;
	      double var_d=A[a-2][b-5]/0.827;
	      
	      A[a][b]=A[a][b]*B[a][b][c]/C[a];
	      B[a][b][c]=A[a][b-3]/C[a];
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(920, "ones");
	double ***E = create_three_dim_double(610, 850, 100, "ones");
	double ***B = create_three_dim_double(180, 310, 80, "ones");
	double ***A = create_three_dim_double(550, 650, 880, "ones");
	double **D = create_two_dim_double(340, 900, "ones");

	for (int c = 3; c < 100; c++)
	  for (int b = 5; b < 646; b++)
	    for (int a = 5; a < 335; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-4][c]/0.487;
	      
	      C[a]=C[a-1]/B[a][b][c]-D[a][b]+A[a][b][c]*E[a][b][c];
	      
	      D[a][b]=D[a-5][b]+0.16;
	      
	      E[a][b][c]=E[a-5][b-5][c]*0.062;
	      
	      double var_a=A[a][b][c]/0.66;
	      double var_b=A[a][b+4][c+1]-0.646;
	      
	      double var_c=D[a][b]*0.228;
	      double var_d=D[a+5][b+4]-0.116;
	      
	      A[a][b][c]=E[a][b][c]+C[a]*C[a];
	      D[a][b]=E[a-1][b-2][c-3]/B[a][b][c]-C[a]*D[a][b]+A[a][b][c];
	    }

    return 0;
}
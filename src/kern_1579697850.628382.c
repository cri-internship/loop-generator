#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(240, 130, 90, "zeros");
	double ***C = create_three_dim_double(300, 960, 940, "zeros");
	double **A = create_two_dim_double(990, 200, "zeros");
	double *D = create_one_dim_double(80, "zeros");

	for (int c = 0; c < 88; c++)
	  for (int b = 5; b < 125; b++)
	    for (int a = 5; a < 239; a++)
	    {
	      
	      A[a][b]=A[a-5][b-5]*D[a]+B[a][b][c]-C[a][b][c];
	      
	      A[a][b]=A[a+5][b+1]-C[a][b][c]/B[a][b][c]+D[a];
	      
	      A[a][b]=A[a+3][b+3]/0.231;
	      
	      B[a][b][c]=B[a+1][b+5][c+2]*0.761-D[a]/A[a][b];
	      
	      D[a]=C[a][b][c]-B[a][b][c];
	      A[a][b]=C[a-1][b-5][c]/B[a][b][c];
	      
	      double var_a=C[a][b][c]+0.609;
	      double var_b=C[a+3][b+3][c+4]*0.974;
	      
	      double var_c=A[a][b]+0.005;
	      double var_d=A[a+2][b+3]/0.896;
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(600, 490, "random");
	double *A = create_one_dim_double(480, "random");
	double ***E = create_three_dim_double(760, 700, 580, "random");
	double ***C = create_three_dim_double(450, 400, 870, "random");
	double ***D = create_three_dim_double(340, 130, 210, "random");

	for (int c = 2; c < 205; c++)
	  for (int b = 3; b < 127; b++)
	    for (int a = 3; a < 336; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b-2][c-2]-0.538;
	      
	      E[a][b][c]=E[a][b-3][c]*0.912;
	      
	      A[a]=0.106;
	      float  var_a=A[a]-0.723;
	      
	      D[a][b][c]=D[a+4][b+3][c+5]-C[a][b][c]*E[a][b][c]+B[a][b];
	      
	      double var_b=C[a][b][c]*0.532;
	      double var_c=C[a][b-1][c-2]+0.976;
	      
	      double var_d=B[a][b]*0.124;
	      double var_e=B[a+1][b+3]/0.135;
	      
	      double var_f=C[a][b][c]*0.578;
	      double var_g=C[a-3][b-3][c]-0.018;
	    }

    return 0;
}
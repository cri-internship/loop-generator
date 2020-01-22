#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(680, 160, 620, "zeros");
	double **C = create_two_dim_double(50, 490, "zeros");
	double ***D = create_three_dim_double(590, 500, 150, "zeros");
	double **A = create_two_dim_double(60, 780, "zeros");

	for (int c = 5; c < 148; c++)
	  for (int b = 2; b < 160; b++)
	    for (int a = 3; a < 47; a++)
	    {
	      
	      D[a][b][c]=D[a][b][c-5]-0.603;
	      
	      B[a][b][c]=B[a-3][b-2][c-3]/C[a][b]*D[a][b][c];
	      
	      C[a][b]=C[a+3][b]*A[a][b]+B[a][b][c];
	      
	      A[a][b]=B[a][b][c];
	      A[a+2][b+2]=B[a][b][c];
	      
	      A[a][b]=C[a][b]-D[a][b][c]/B[a][b][c];
	      
	      double var_a=D[a][b][c]*0.503;
	      double var_b=D[a+4][b+1][c+2]-0.108;
	      
	      D[a][b][c]=D[a][b][c]-A[a][b]*0.158;
	      B[a][b][c]=D[a-1][b-2][c-1]-0.188;
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(80, 440, 870, "zeros");
	double **E = create_two_dim_double(730, 600, "zeros");
	double **D = create_two_dim_double(850, 900, "zeros");
	double **A = create_two_dim_double(910, 330, "zeros");
	double **C = create_two_dim_double(370, 530, "zeros");

	for (int d = 5; d < 327; d++)
	  for (int c = 3; c < 367; c++)
	    for (int b = 3; b < 367; b++)
	      for (int a = 3; a < 367; a++)
	      {
	        
	       E[a][b]=E[a-3][b-4]+0.72;
	        
	       A[a][b]=A[a+1][b]+C[a][b]-E[a][b]*0.03/D[a][b];
	        
	       C[a][b]=C[a][b+2]-A[a][b]*D[a][b]/A[a][b];
	        
	       D[a][b]=C[a][b]+A[a][b];
	       D[a-2][b-5]=B[a][b][c]+A[a][b]*E[a][b]/C[a][b];
	        
	       C[a][b]=0.135;
	        
	       A[a][b]=B[a][b][c]-D[a][b]/C[a][b];
	        
	       double var_a=D[a][b]-0.215;
	       double var_b=D[a-3][b-3]/0.012;
	      }

    return 0;
}
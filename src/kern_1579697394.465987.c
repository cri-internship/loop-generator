#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(710, 600, "zeros");
	double *C = create_one_dim_double(340, "zeros");
	double *A = create_one_dim_double(720, "zeros");
	double **B = create_two_dim_double(800, 530, "zeros");
	double **E = create_two_dim_double(560, 520, "zeros");

	for (int d = 4; d < 517; d++)
	  for (int c = 5; c < 340; c++)
	    for (int b = 5; b < 340; b++)
	      for (int a = 5; a < 340; a++)
	      {
	        
	       C[a]=C[a-4]*0.72;
	        
	       A[a]=0.665;
	       float  var_a=A[a]-0.224;
	        
	       B[a][b]=A[a]*E[a][b]+C[a]/D[a][b];
	       B[a+1][b+1]=0.5+C[a];
	        
	       A[a]=0.825*E[a][b]+C[a];
	        
	       B[a][b]=B[a][b]-E[a][b]+C[a];
	       D[a][b]=B[a-5][b-4]*C[a]-D[a][b];
	        
	       double var_b=E[a][b]/0.642;
	       double var_c=E[a+3][b+3]*0.977;
	      }

    return 0;
}
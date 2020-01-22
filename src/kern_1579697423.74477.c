#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(300, "zeros");
	float **C = create_two_dim_float(930, 80, "zeros");
	float *E = create_one_dim_float(980, "zeros");
	float **A = create_two_dim_float(10, 860, "zeros");
	float **D = create_two_dim_float(420, 550, "zeros");

	for (int d = 5; d < 76; d++)
	  for (int c = 2; c < 5; c++)
	    for (int b = 2; b < 5; b++)
	      for (int a = 2; a < 5; a++)
	      {
	        
	       C[a][b]=C[a+5][b+4]*E[a]-B[a];
	        
	       B[a]=0.461;
	       B[a+1]=0.459;
	        
	       E[a]=D[a][b]+A[a][b]-C[a][b];
	       A[a][b]=D[a-2][b-5]+0.542;
	        
	       float var_a=A[a][b]/0.886;
	       float var_b=A[a+5][b+2]-0.569;
	        
	       float var_c=E[a]+0.919;
	       float var_d=E[a+4]-0.148;
	        
	       B[a]=D[a][b]+0.693;
	       C[a][b]=D[a+3][b+1]-E[a];
	        
	       D[a][b]=B[a]+D[a][b]-C[a][b]*E[a];
	       A[a][b]=B[a+1]/A[a][b]-E[a];
	      }

    return 0;
}
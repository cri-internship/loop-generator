#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(770, 190, "random");
	double **A = create_two_dim_double(600, 860, "random");
	double *B = create_one_dim_double(850, "random");
	double **D = create_two_dim_double(420, 900, "random");

	for (int d = 1; d < 187; d++)
	  for (int c = 5; c < 595; c++)
	    for (int b = 5; b < 595; b++)
	      for (int a = 5; a < 595; a++)
	      {
	        
	       B[a]=B[a-5]-0.644;
	        
	       B[a]=B[a-3]/0.865;
	        
	       A[a][b]=A[a-2][b-1]*0.333;
	        
	       A[a][b]=A[a+5][b]-0.243;
	        
	       C[a][b]=B[a]/D[a][b]-0.087;
	       C[a][b+3]=B[a]+D[a][b];
	        
	       D[a][b]=A[a][b]-C[a][b]*D[a][b]+B[a];
	       B[a]=A[a+1][b+2]*B[a];
	        
	       double var_a=C[a][b]+0.013;
	       double var_b=C[a][b-1]+0.24;
	      }

    return 0;
}
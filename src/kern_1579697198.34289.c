#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(670, "random");
	double *A = create_one_dim_double(170, "random");
	double *B = create_one_dim_double(570, "random");
	double ***C = create_three_dim_double(540, 780, 580, "random");

	for (int d = 0; d < 575; d++)
	  for (int c = 0; c < 778; c++)
	    for (int b = 5; b < 170; b++)
	      for (int a = 5; a < 170; a++)
	      {
	        
	       A[a]=C[a][b][c];
	       B[a]=A[a]-B[a];
	        
	       B[a]=B[a-5]*D[a]+A[a]-A[a];
	        
	       C[a][b][c]=C[a+4][b+2][c+5]+0.078;
	        
	       double var_a=A[a]+0.838;
	       double var_b=A[a-5]-0.752;
	      }

    return 0;
}
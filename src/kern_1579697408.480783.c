#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(660, "random");
	double ***B = create_three_dim_double(40, 530, 1000, "random");

	for (int d = 0; d < 997; d++)
	  for (int c = 1; c < 528; c++)
	    for (int b = 5; b < 39; b++)
	      for (int a = 5; a < 39; a++)
	      {
	        
	       A[a]=0.764;
	       A[a+2]=B[a][b][c];
	        
	       A[a]=A[a]-B[a][b][c];
	       B[a][b][c]=A[a+2]-B[a][b][c];
	        
	       B[a][b][c]=B[a][b][c]/A[a];
	       A[a]=B[a][b+1][c+3]+A[a];
	        
	       double var_a=B[a][b][c]-0.381;
	       double var_b=B[a+1][b+2][c]-0.976;
	        
	       A[a]=B[a][b][c]+0.824;
	       A[a]=B[a-5][b-1][c]*A[a];
	      }

    return 0;
}
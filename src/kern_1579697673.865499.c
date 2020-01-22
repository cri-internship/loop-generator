#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(710, "random");
	double **B = create_two_dim_double(260, 770, "random");
	double *D = create_one_dim_double(630, "random");
	double ***A = create_three_dim_double(600, 860, 470, "random");

	for (int d = 0; d < 469; d++)
	  for (int c = 0; c < 765; c++)
	    for (int b = 5; b < 256; b++)
	      for (int a = 5; a < 256; a++)
	      {
	        
	       C[a]=C[a+5]/0.677;
	        
	       B[a][b]=B[a+1][b+5]-0.684;
	        
	       A[a][b][c]=A[a][b+1][c+1]*D[a]+B[a][b];
	        
	       D[a]=A[a][b][c]-C[a]/C[a];
	       D[a-2]=C[a];
	        
	       B[a][b]=A[a][b][c];
	        
	       double var_a=A[a][b][c]-0.289;
	       double var_b=A[a-5][b][c]/0.252;
	        
	       double var_c=D[a]-0.719;
	       double var_d=D[a+2]*0.523;
	      }

    return 0;
}
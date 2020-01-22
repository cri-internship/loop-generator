#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(680, 730, "zeros");
	double *C = create_one_dim_double(660, "zeros");
	double ***B = create_three_dim_double(960, 710, 260, "zeros");

	for (int d = 4; d < 730; d++)
	  for (int c = 5; c < 655; c++)
	    for (int b = 5; b < 655; b++)
	      for (int a = 5; a < 655; a++)
	      {
	        
	       C[a]=C[a-1]-0.26;
	        
	       A[a][b]=A[a-4][b-4]/C[a]*B[a][b][c];
	        
	       C[a]=C[a+5]*A[a][b];
	        
	       A[a][b]=C[a]-B[a][b][c];
	        
	       C[a]=C[a]/0.864;
	       A[a][b]=C[a-2]+0.78;
	        
	       double var_a=C[a]/0.88;
	       double var_b=C[a-5]-0.1;
	      }

    return 0;
}
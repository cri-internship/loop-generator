#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(900, 420, 50, "zeros");
	double *C = create_one_dim_double(830, "zeros");
	double ***B = create_three_dim_double(880, 260, 280, "zeros");

	for (int d = 0; d < 45; d++)
	  for (int c = 0; c < 415; c++)
	    for (int b = 3; b < 830; b++)
	      for (int a = 3; a < 830; a++)
	      {
	        
	       C[a]=C[a-2]+A[a][b][c]/B[a][b][c];
	        
	       A[a][b][c]=A[a+3][b+3][c+2]+0.39;
	        
	       C[a]=B[a][b][c]-A[a][b][c];
	        
	       double var_a=A[a][b][c]+0.38;
	       double var_b=A[a+1][b+5][c+5]*0.203;
	      }

    return 0;
}
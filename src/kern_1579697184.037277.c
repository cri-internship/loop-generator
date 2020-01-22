#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(260, "ones");
	double ***B = create_three_dim_double(70, 570, 740, "ones");
	double *A = create_one_dim_double(660, "ones");

	for (int d = 0; d < 735; d++)
	  for (int c = 0; c < 570; c++)
	    for (int b = 4; b < 66; b++)
	      for (int a = 4; a < 66; a++)
	      {
	        
	       B[a][b][c]=B[a+4][b][c+5]+C[a]*A[a];
	        
	       double var_a=C[a]+0.223;
	       double var_b=C[a-4]*0.123;
	        
	       double var_c=A[a]-0.089;
	       double var_d=A[a+4]-0.498;
	      }

    return 0;
}
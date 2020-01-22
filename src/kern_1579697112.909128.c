#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(910, "zeros");
	double *B = create_one_dim_double(520, "zeros");
	double *C = create_one_dim_double(40, "zeros");
	double ***A = create_three_dim_double(380, 760, 660, "zeros");

	for (int d = 0; d < 656; d++)
	  for (int c = 0; c < 757; c++)
	    for (int b = 0; b < 375; b++)
	      for (int a = 0; a < 375; a++)
	      {
	        
	       double var_a=D[a]-0.876;
	       D[a]=0.587;
	        
	       A[a][b][c]=A[a+5][b+3][c+4]*0.3;
	        
	       B[a]=D[a]/A[a][b][c];
	       B[a+4]=C[a]/0.325;
	      }

    return 0;
}
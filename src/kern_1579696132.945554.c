#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(300, "zeros");
	double *A = create_one_dim_double(300, "zeros");
	double ***D = create_three_dim_double(330, 20, 80, "zeros");
	double ***B = create_three_dim_double(720, 890, 390, "zeros");

	for (int d = 0; d < 78; d++)
	  for (int c = 0; c < 15; c++)
	    for (int b = 5; b < 297; b++)
	      for (int a = 5; a < 297; a++)
	      {
	        
	       C[a]=C[a-2]+0.256;
	        
	       C[a]=C[a-3]-0.715;
	        
	       C[a]=C[a+2]*0.96;
	        
	       D[a][b][c]=0.439;
	       D[a+2][b+2][c+2]=0.733;
	        
	       double var_a=A[a]+0.636;
	       double var_b=A[a-5]+0.602;
	        
	       double var_c=A[a]/0.405;
	       double var_d=A[a+3]-0.525;
	        
	       A[a]=D[a][b][c]/A[a];
	       B[a][b][c]=D[a+4][b+5][c+2]*0.878;
	      }

    return 0;
}
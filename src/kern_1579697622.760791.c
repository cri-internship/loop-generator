#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(40, "zeros");
	int *C = create_one_dim_int(520, "zeros");
	int ***B = create_three_dim_int(50, 300, 520, "zeros");

	for (int d = 3; d < 520; d++)
	  for (int c = 1; c < 300; c++)
	    for (int b = 0; b < 35; b++)
	      for (int a = 0; a < 35; a++)
	      {
	        
	       A[a]=19;
	       float  var_a=A[a]+16;
	        
	       B[a][b][c]=B[a][b-1][c-3]*38;
	        
	       B[a][b][c]=B[a+3][b][c]/17;
	        
	       A[a]=A[a+5]-29;
	        
	       int var_b=C[a]+36;
	       C[a]=20;
	        
	       int var_c=A[a]/10;
	       int var_d=A[a+2]-18;
	      }

    return 0;
}
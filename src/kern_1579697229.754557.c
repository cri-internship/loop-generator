#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(360, "ones");
	int **B = create_two_dim_int(710, 920, "ones");
	int *A = create_one_dim_int(160, "ones");

	for (int d = 0; d < 917; d++)
	  for (int c = 1; c < 160; c++)
	    for (int b = 1; b < 160; b++)
	      for (int a = 1; a < 160; a++)
	      {
	        
	       A[a]=19;
	       float  var_a=A[a]-43;
	        
	       B[a][b]=B[a+1][b+3]*A[a];
	        
	       A[a]=C[a];
	        
	       int var_b=A[a]*39;
	       int var_c=A[a-1]+44;
	        
	       A[a]=C[a]*A[a];
	       C[a]=C[a+3]+A[a];
	        
	       int var_d=C[a]*23;
	       int var_e=C[a-1]*22;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(690, "zeros");
	int **A = create_two_dim_int(940, 980, "zeros");
	int *B = create_one_dim_int(70, "zeros");

	for (int d = 0; d < 977; d++)
	  for (int c = 5; c < 67; c++)
	    for (int b = 5; b < 67; b++)
	      for (int a = 5; a < 67; a++)
	      {
	        
	       B[a]=B[a-4]-A[a][b]+C[a];
	        
	       C[a]=C[a+1]*B[a]-A[a][b];
	        
	       B[a]=B[a+3]*8;
	        
	       A[a][b]=B[a]/C[a];
	       A[a-5][b]=B[a];
	        
	       int var_a=A[a][b]*36;
	       int var_b=A[a+3][b+3]/15;
	        
	       int var_c=A[a][b]+2;
	       int var_d=A[a+1][b+2]*15;
	      }

    return 0;
}
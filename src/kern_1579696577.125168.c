#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(200, "zeros");
	int **A = create_two_dim_int(300, 840, "zeros");
	int *B = create_one_dim_int(220, "zeros");
	int *C = create_one_dim_int(400, "zeros");

	for (int d = 0; d < 837; d++)
	  for (int c = 2; c < 197; c++)
	    for (int b = 2; b < 197; b++)
	      for (int a = 2; a < 197; a++)
	      {
	        
	       C[a]=C[a-2]*17;
	        
	       C[a]=C[a+5]/5;
	        
	       D[a]=D[a+3]-44;
	        
	       int var_a=A[a][b]/7;
	       int var_b=A[a+4][b+3]-37;
	      }

    return 0;
}
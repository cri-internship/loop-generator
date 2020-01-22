#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(590, "zeros");
	int *B = create_one_dim_int(690, "zeros");
	int **A = create_two_dim_int(800, 340, "zeros");

	for (int d = 4; d < 590; d++)
	  for (int c = 4; c < 590; c++)
	    for (int b = 4; b < 590; b++)
	      for (int a = 4; a < 590; a++)
	      {
	        
	       B[a]=31;
	       float  var_a=B[a]/19;
	        
	       C[a]=C[a-2]*44;
	        
	       C[a]=10;
	        
	       B[a]=28;
	        
	       A[a][b]=B[a]*C[a];
	       B[a]=B[a+4]*A[a][b];
	      }

    return 0;
}
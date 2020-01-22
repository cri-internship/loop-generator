#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(340, 260, "random");
	int **D = create_two_dim_int(580, 380, "random");
	int **A = create_two_dim_int(100, 440, "random");
	int *C = create_one_dim_int(50, "random");

	for (int d = 0; d < 257; d++)
	  for (int c = 0; c < 46; c++)
	    for (int b = 0; b < 46; b++)
	      for (int a = 0; a < 46; a++)
	      {
	        
	       C[a]=C[a+4]*42;
	        
	       C[a]=24;
	        
	       A[a][b]=D[a][b]*B[a][b];
	       A[a+2][b+5]=C[a]-C[a];
	        
	       int var_a=B[a][b]-12;
	       int var_b=B[a][b+3]-37;
	      }

    return 0;
}
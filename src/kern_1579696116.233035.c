#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(170, 330, "ones");
	int *C = create_one_dim_int(390, "ones");
	int **A = create_two_dim_int(280, 350, "ones");
	int **B = create_two_dim_int(90, 260, "ones");

	for (int d = 0; d < 260; d++)
	  for (int c = 0; c < 87; c++)
	    for (int b = 0; b < 87; b++)
	      for (int a = 0; a < 87; a++)
	      {
	        
	       C[a]=C[a+5]*B[a][b];
	        
	       B[a][b]=B[a+3][b]-34;
	      }

    return 0;
}
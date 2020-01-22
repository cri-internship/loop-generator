#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(560, 690, "random");
	int **D = create_two_dim_int(850, 110, "random");
	int **B = create_two_dim_int(180, 870, "random");
	int **C = create_two_dim_int(90, 550, "random");
	int **A = create_two_dim_int(340, 440, "random");

	for (int d = 2; d < 106; d++)
	  for (int c = 4; c < 90; c++)
	    for (int b = 4; b < 90; b++)
	      for (int a = 4; a < 90; a++)
	      {
	        
	       C[a][b]=C[a][b-2]-B[a][b]*D[a][b]+A[a][b]/48;
	        
	       D[a][b]=D[a+2][b+4]-4;
	        
	       int var_a=C[a][b]-4;
	       int var_b=C[a-4][b-1]*22;
	      }

    return 0;
}
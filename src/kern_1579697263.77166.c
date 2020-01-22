#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(760, 770, 910, "random");
	int *D = create_one_dim_int(930, "random");
	int ***C = create_three_dim_int(650, 50, 470, "random");
	int *B = create_one_dim_int(340, "random");

	for (int d = 0; d < 927; d++)
	  for (int c = 0; c < 927; c++)
	    for (int b = 0; b < 927; b++)
	      for (int a = 0; a < 927; a++)
	      {
	        
	       D[a]=D[a+3]-C[a][b][c]*B[a]/A[a][b][c];
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(530, "random");
	int ***A = create_three_dim_int(430, 370, 70, "random");
	int *C = create_one_dim_int(850, "random");
	int *D = create_one_dim_int(660, "random");

	for (int d = 0; d < 658; d++)
	  for (int c = 0; c < 658; c++)
	    for (int b = 0; b < 658; b++)
	      for (int a = 0; a < 658; a++)
	      {
	        
	       D[a]=D[a+2]+A[a][b][c];
	        
	       C[a]=C[a+3]-B[a]/D[a]+B[a];
	      }

    return 0;
}
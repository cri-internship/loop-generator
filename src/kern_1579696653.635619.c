#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(970, "random");
	int ***B = create_three_dim_int(690, 10, 530, "random");
	int **A = create_two_dim_int(190, 580, "random");

	for (int d = 5; d < 580; d++)
	  for (int c = 5; c < 190; c++)
	    for (int b = 5; b < 190; b++)
	      for (int a = 5; a < 190; a++)
	      {
	        
	       A[a][b]=A[a-5][b-5]*49;
	      }

    return 0;
}
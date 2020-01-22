#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(170, 820, "random");
	int **C = create_two_dim_int(840, 310, "random");
	int *E = create_one_dim_int(630, "random");
	int *D = create_one_dim_int(470, "random");
	int **A = create_two_dim_int(270, 700, "random");

	for (int d = 2; d < 310; d++)
	  for (int c = 2; c < 630; c++)
	    for (int b = 2; b < 630; b++)
	      for (int a = 2; a < 630; a++)
	      {
	        
	       E[a]=E[a-1]*49;
	        
	       C[a][b]=3;
	       C[a-2][b-2]=26;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(430, "random");
	int ***D = create_three_dim_int(540, 860, 700, "random");
	int ***A = create_three_dim_int(150, 680, 520, "random");
	int ***C = create_three_dim_int(940, 410, 850, "random");
	int **B = create_two_dim_int(850, 240, "random");

	for (int d = 0; d < 235; d++)
	  for (int c = 0; c < 847; c++)
	    for (int b = 0; b < 847; b++)
	      for (int a = 0; a < 847; a++)
	      {
	        
	       B[a][b]=B[a+3][b+5]-32;
	      }

    return 0;
}
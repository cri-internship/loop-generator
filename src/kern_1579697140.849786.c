#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(300, 990, 150, "random");
	int *C = create_one_dim_int(400, "random");
	int ***B = create_three_dim_int(720, 510, 540, "random");

	for (int b = 0; b < 505; b++)
	  for (int a = 0; a < 715; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b+5][a+3]/C[a]-A[a][b][a];
	  }

    return 0;
}
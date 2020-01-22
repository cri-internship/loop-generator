#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(970, 600, 180, "zeros");
	int *A = create_one_dim_int(310, "zeros");
	int **C = create_two_dim_int(470, 770, "zeros");
	int ***B = create_three_dim_int(70, 310, 530, "zeros");

	for (int b = 0; b < 306; b++)
	  for (int a = 0; a < 306; a++)
	  {
	    
	     A[a]=A[a+4]/D[a][b][a]-B[a][b][a];
	  }

    return 0;
}
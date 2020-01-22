#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(300, 900, 470, "ones");
	int *C = create_one_dim_int(770, "ones");
	int *B = create_one_dim_int(20, "ones");
	int ***A = create_three_dim_int(290, 900, 530, "ones");
	int **D = create_two_dim_int(180, 760, "ones");

	for (int b = 0; b < 896; b++)
	  for (int a = 0; a < 285; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b+4][a+5]/D[a][b]*B[a]+C[a]-E[a][b][a];
	  }

    return 0;
}
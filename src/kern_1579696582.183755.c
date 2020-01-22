#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(80, "zeros");
	int **A = create_two_dim_int(100, 1000, "zeros");
	int **C = create_two_dim_int(990, 530, "zeros");

	for (int b = 0; b < 995; b++)
	  for (int a = 0; a < 100; a++)
	  {
	    
	     A[a][b]=A[a][b+5]-C[a][b]*B[a];
	  }

    return 0;
}
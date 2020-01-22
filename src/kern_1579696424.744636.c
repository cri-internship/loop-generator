#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(750, "zeros");
	int **E = create_two_dim_int(400, 230, "zeros");
	int *B = create_one_dim_int(370, "zeros");
	int **A = create_two_dim_int(300, 930, "zeros");
	int **D = create_two_dim_int(840, 350, "zeros");

	for (int b = 0; b < 345; b++)
	  for (int a = 0; a < 838; a++)
	  {
	    
	     int var_a=D[a][b]+32;
	     int var_b=D[a+2][b+5]-15;
	  }

    return 0;
}
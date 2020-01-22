#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(850, 100, 230, "random");
	int *A = create_one_dim_int(400, "random");
	int **C = create_two_dim_int(420, 300, "random");
	int **D = create_two_dim_int(340, 190, "random");
	int **B = create_two_dim_int(570, 110, "random");

	for (int b = 2; b < 110; b++)
	  for (int a = 1; a < 570; a++)
	  {
	    
	     B[a][b]=B[a-1][b-2]+48;
	  }

    return 0;
}
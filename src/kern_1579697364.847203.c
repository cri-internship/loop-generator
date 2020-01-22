#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(590, 470, "random");
	int ***A = create_three_dim_int(40, 150, 130, "random");
	int **C = create_two_dim_int(570, 670, "random");
	int *B = create_one_dim_int(730, "random");

	for (int b = 0; b < 669; b++)
	  for (int a = 0; a < 567; a++)
	  {
	    
	     C[a][b]=A[a][b][a]+B[a]*42;
	     C[a+3][b+1]=D[a][b];
	  }

    return 0;
}
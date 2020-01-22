#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(670, 10, 740, "random");
	int **B = create_two_dim_int(730, 930, "random");
	int **C = create_two_dim_int(760, 180, "random");
	int *D = create_one_dim_int(170, "random");

	for (int b = 2; b < 180; b++)
	  for (int a = 5; a < 730; a++)
	  {
	    
	     int var_a=C[a][b]-29;
	     int var_b=C[a-5][b-2]*11;
	    
	     A[a][b][a]=B[a][b]*C[a][b];
	     C[a][b]=B[a-2][b]+D[a]-A[a][b][a]/A[a][b][a];
	  }

    return 0;
}
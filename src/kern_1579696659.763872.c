#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(770, 950, 520, "random");
	int **C = create_two_dim_int(10, 70, "random");
	int ***B = create_three_dim_int(720, 230, 410, "random");
	int ***A = create_three_dim_int(710, 230, 130, "random");

	for (int b = 2; b < 230; b++)
	  for (int a = 2; a < 710; a++)
	  {
	    
	     C[a][b]=A[a][b][a]+D[a][b][a]/B[a][b][a]*C[a][b];
	     A[a][b][a]=A[a][b-2][a-2]-D[a][b][a]+B[a][b][a];
	  }

    return 0;
}
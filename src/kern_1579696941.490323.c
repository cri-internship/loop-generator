#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(20, 10, 710, "random");
	int ***E = create_three_dim_int(370, 770, 260, "random");
	int ***A = create_three_dim_int(510, 590, 930, "random");
	int **D = create_two_dim_int(370, 80, "random");
	int **C = create_two_dim_int(990, 850, "random");

	for (int b = 4; b < 588; b++)
	  for (int a = 3; a < 506; a++)
	  {
	    
	     C[a][b]=A[a][b][a]*D[a][b];
	     C[a-3][b-4]=B[a][b][a];
	    
	     int var_a=A[a][b][a]+8;
	     int var_b=A[a+4][b+2][a+2]*37;
	  }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(700, 130, 850, "random");
	int **A = create_two_dim_int(880, 790, "random");
	int *D = create_one_dim_int(120, "random");
	int ***B = create_three_dim_int(430, 610, 450, "random");
	int **E = create_two_dim_int(980, 10, "random");

	for (int b = 0; b < 610; b++)
	  for (int a = 1; a < 120; a++)
	  {
	    
	     B[a][b][a]=B[a+3][b][a+4]*A[a][b]/D[a]-C[a][b][a]+E[a][b];
	    
	     int var_a=D[a]*19;
	     int var_b=D[a-1]*45;
	  }

    return 0;
}
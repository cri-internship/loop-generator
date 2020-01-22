#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(360, "random");
	int ***D = create_three_dim_int(530, 860, 310, "random");
	int *B = create_one_dim_int(190, "random");
	int **E = create_two_dim_int(210, 740, "random");
	int **C = create_two_dim_int(320, 740, "random");

	for (int b = 0; b < 736; b++)
	  for (int a = 5; a < 190; a++)
	  {
	    
	     B[a]=C[a][b]/D[a][b][a]*E[a][b];
	     B[a-3]=A[a]+A[a]*D[a][b][a]-C[a][b];
	    
	     E[a][b]=B[a];
	     E[a+3][b+4]=D[a][b][a]-A[a]+C[a][b]/B[a];
	    
	     A[a]=22;
	     A[a-5]=17;
	    
	     int var_a=E[a][b]-31;
	     int var_b=E[a+1][b+3]/6;
	  }

    return 0;
}
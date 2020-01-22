#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(950, "random");
	int ***C = create_three_dim_int(480, 820, 730, "random");
	int **A = create_two_dim_int(620, 310, "random");
	int *D = create_one_dim_int(280, "random");
	int **B = create_two_dim_int(220, 10, "random");

	for (int b = 0; b < 9; b++)
	  for (int a = 0; a < 217; a++)
	  {
	    
	     B[a][b]=B[a+3][b+1]-31;
	    
	     A[a][b]=A[a][b+1]/28;
	    
	     E[a]=C[a][b][a]+7/D[a];
	     A[a][b]=C[a+1][b+1][a+5]-B[a][b]+E[a]*28;
	  }

    return 0;
}
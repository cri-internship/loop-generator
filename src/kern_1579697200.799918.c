#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(510, 800, 350, "random");
	int ***E = create_three_dim_int(60, 570, 430, "random");
	int **B = create_two_dim_int(590, 1000, "random");
	int **D = create_two_dim_int(400, 50, "random");
	int *A = create_one_dim_int(570, "random");

	for (int b = 0; b < 48; b++)
	  for (int a = 3; a < 55; a++)
	  {
	    
	     A[a]=A[a+4]*11;
	    
	     D[a][b]=D[a+2][b+2]*41;
	    
	     B[a][b]=18;
	     B[a-3][b]=39;
	    
	     C[a][b][a]=C[a][b][a]-B[a][b]+E[a][b][a];
	     B[a][b]=C[a+3][b+5][a+1]-D[a][b]/A[a];
	    
	     int var_a=E[a][b][a]*21;
	     int var_b=E[a+5][b+5][a]/41;
	  }

    return 0;
}
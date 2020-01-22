#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(430, 140, 660, "random");
	int *D = create_one_dim_int(280, "random");
	int ***A = create_three_dim_int(770, 980, 800, "random");
	int **B = create_two_dim_int(400, 1000, "random");

	for (int b = 0; b < 135; b++)
	  for (int a = 1; a < 280; a++)
	  {
	    
	     A[a][b][a]=A[a][b][a+1]-B[a][b];
	    
	     A[a][b][a]=A[a+5][b+5][a]/C[a][b][a]*D[a]+49;
	    
	     A[a][b][a]=A[a+4][b+5][a+4]-B[a][b]*C[a][b][a]+D[a];
	    
	     C[a][b][a]=A[a][b][a]+B[a][b]/A[a][b][a];
	     C[a+2][b+5][a]=A[a][b][a]+B[a][b]-D[a];
	    
	     B[a][b]=D[a];
	     B[a][b+3]=D[a]*A[a][b][a];
	    
	     int var_a=D[a]*32;
	     int var_b=D[a-1]-21;
	  }

    return 0;
}
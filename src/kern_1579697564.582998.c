#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(750, 900, 450, "ones");
	int **C = create_two_dim_int(910, 770, "ones");
	int *B = create_one_dim_int(240, "ones");
	int **A = create_two_dim_int(610, 590, "ones");

	for (int b = 3; b < 587; b++)
	  for (int a = 4; a < 240; a++)
	  {
	    
	     B[a]=B[a-4]*5;
	    
	     D[a][b][a]=B[a];
	     D[a+2][b+1][a+2]=C[a][b]/B[a]-C[a][b];
	    
	     A[a][b]=D[a][b][a]/C[a][b]+B[a];
	     A[a][b+3]=D[a][b][a]-B[a];
	    
	     A[a][b]=D[a][b][a]/C[a][b]-A[a][b]*B[a];
	     D[a][b][a]=D[a-1][b-3][a]*C[a][b]/A[a][b]-B[a];
	    
	     int var_a=D[a][b][a]-24;
	     int var_b=D[a-1][b][a-2]+38;
	  }

    return 0;
}
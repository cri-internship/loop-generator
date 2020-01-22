#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(610, "ones");
	int ***B = create_three_dim_int(140, 770, 40, "ones");
	int **D = create_two_dim_int(770, 160, "ones");
	int **A = create_two_dim_int(150, 110, "ones");

	for (int b = 5; b < 110; b++)
	  for (int a = 2; a < 137; a++)
	  {
	    
	     D[a][b]=D[a-1][b]-C[a]+A[a][b]*30;
	    
	     C[a]=D[a][b]/D[a][b]-B[a][b][a];
	     C[a+1]=D[a][b];
	    
	     D[a][b]=B[a][b][a]*A[a][b]/D[a][b];
	     C[a]=B[a+3][b+2][a+3]+D[a][b];
	    
	     int var_a=A[a][b]-40;
	     int var_b=A[a-2][b-5]*15;
	  }

    return 0;
}
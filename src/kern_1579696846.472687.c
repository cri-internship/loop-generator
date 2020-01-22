#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 100, "random");
	int **D = create_two_dim_int(400, 780, "random");
	int ***A = create_three_dim_int(90, 120, 810, "random");
	int ***C = create_three_dim_int(70, 880, 870, "random");

	for (int b = 3; b < 778; b++)
	  for (int a = 5; a < 70; a++)
	  {
	    
	     D[a][b]=D[a-2][b-2]/32;
	    
	     D[a][b]=D[a][b]*A[a][b][a]+B[a][b];
	    
	     C[a][b][a]=18;
	     C[a-1][b-3][a-5]=22;
	    
	     B[a][b]=D[a][b]/A[a][b][a]-C[a][b][a]*B[a][b];
	     C[a][b][a]=D[a+4][b+2]/C[a][b][a]*B[a][b]-A[a][b][a];
	  }

    return 0;
}
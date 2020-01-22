#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(200, "zeros");
	int **C = create_two_dim_int(810, 490, "zeros");
	int **A = create_two_dim_int(960, 820, "zeros");
	int *D = create_one_dim_int(560, "zeros");

	for (int b = 5; b < 489; b++)
	  for (int a = 5; a < 805; a++)
	  {
	    
	     A[a][b]=A[a-5][b-5]*D[a]-B[a]+C[a][b];
	    
	     A[a][b]=A[a+1][b+5]*18;
	    
	     C[a][b]=C[a][b]-A[a][b];
	     B[a]=C[a+5][b+1]*B[a]/D[a]+A[a][b];
	  }

    return 0;
}
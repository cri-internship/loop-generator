#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(210, 900, "random");
	int ***B = create_three_dim_int(870, 850, 330, "random");
	int **A = create_two_dim_int(810, 820, "random");
	int ***C = create_three_dim_int(310, 720, 50, "random");

	for (int b = 5; b < 850; b++)
	  for (int a = 5; a < 206; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-3][a]/11;
	    
	     D[a][b]=B[a][b][a]-A[a][b]+C[a][b][a];
	     D[a+4][b]=C[a][b][a]/A[a][b]*B[a][b][a];
	    
	     B[a][b][a]=D[a][b]-C[a][b][a];
	  }

    return 0;
}
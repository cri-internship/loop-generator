#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(140, "ones");
	int ***B = create_three_dim_int(260, 790, 800, "ones");
	int ***A = create_three_dim_int(520, 390, 720, "ones");
	int **E = create_two_dim_int(170, 560, "ones");
	int ***D = create_three_dim_int(610, 290, 150, "ones");

	for (int b = 0; b < 387; b++)
	  for (int a = 4; a < 135; a++)
	  {
	    
	     A[a][b][a]=24;
	     A[a+3][b+3][a+5]=3;
	    
	     C[a]=E[a][b]+A[a][b][a]*B[a][b][a];
	     C[a+5]=D[a][b][a]+E[a][b]-D[a][b][a]/A[a][b][a];
	    
	     C[a]=50;
	    
	     B[a][b][a]=47;
	     B[a+2][b+3][a+3]=3;
	  }

    return 0;
}
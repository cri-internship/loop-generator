#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(290, 300, "zeros");
	int **E = create_two_dim_int(690, 340, "zeros");
	int ***A = create_three_dim_int(760, 590, 100, "zeros");
	int *C = create_one_dim_int(390, "zeros");
	int **B = create_two_dim_int(960, 100, "zeros");

	for (int b = 1; b < 296; b++)
	  for (int a = 4; a < 290; a++)
	  {
	    
	     E[a][b]=E[a-4][b-1]/A[a][b][a]-C[a]*B[a][b];
	    
	     C[a]=E[a][b];
	     C[a]=D[a][b]*E[a][b]/D[a][b];
	    
	     E[a][b]=16;
	    
	     int var_a=D[a][b]+4;
	     int var_b=D[a][b+4]-21;
	  }

    return 0;
}
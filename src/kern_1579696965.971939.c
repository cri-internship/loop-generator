#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(340, 110, "zeros");
	int *E = create_one_dim_int(620, "zeros");
	int **D = create_two_dim_int(800, 920, "zeros");
	int ***B = create_three_dim_int(100, 360, 980, "zeros");
	int **A = create_two_dim_int(870, 390, "zeros");

	for (int b = 4; b < 389; b++)
	  for (int a = 3; a < 620; a++)
	  {
	    
	     D[a][b]=D[a-1][b-4]/C[a][b]*B[a][b][a];
	    
	     E[a]=29;
	     E[a]=11;
	    
	     A[a][b]=14;
	     A[a][b+1]=35;
	    
	     int var_a=E[a]+4;
	     int var_b=E[a-3]+25;
	  }

    return 0;
}
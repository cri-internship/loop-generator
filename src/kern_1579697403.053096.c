#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(200, 170, "ones");
	int ***A = create_three_dim_int(240, 10, 360, "ones");
	int **C = create_two_dim_int(610, 10, "ones");
	int *D = create_one_dim_int(290, "ones");

	for (int b = 0; b < 5; b++)
	  for (int a = 0; a < 197; a++)
	  {
	    
	     B[a][b]=B[a+3][b+1]-8;
	    
	     A[a][b][a]=1;
	     A[a+3][b+4][a+5]=20;
	    
	     A[a][b][a]=10;
	    
	     C[a][b]=21;
	     C[a+1][b+3]=35;
	    
	     A[a][b][a]=D[a]-A[a][b][a]+A[a][b][a];
	     C[a][b]=D[a]/16;
	    
	     int var_a=D[a]-19;
	     int var_b=D[a+1]-33;
	  }

    return 0;
}
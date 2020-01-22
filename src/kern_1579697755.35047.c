#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(590, 770, "zeros");
	int *C = create_one_dim_int(370, "zeros");
	int ***A = create_three_dim_int(80, 250, 490, "zeros");
	int **B = create_two_dim_int(600, 580, "zeros");

	for (int b = 4; b < 250; b++)
	  for (int a = 2; a < 80; a++)
	  {
	    
	     D[a][b]=D[a][b-2]-37;
	    
	     B[a][b]=B[a+2][b]+13;
	    
	     C[a]=C[a+3]+27;
	    
	     D[a][b]=38;
	    
	     A[a][b][a]=D[a][b];
	     A[a][b-2][a-2]=6;
	    
	     int var_a=B[a][b]/6;
	     int var_b=B[a-1][b-3]+26;
	    
	     D[a][b]=B[a][b]/A[a][b][a]+A[a][b][a];
	     B[a][b]=B[a-2][b-4]+A[a][b][a];
	  }

    return 0;
}
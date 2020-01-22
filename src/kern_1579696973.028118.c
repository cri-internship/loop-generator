#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(580, 40, 910, "ones");
	int *D = create_one_dim_int(870, "ones");
	int **B = create_two_dim_int(850, 720, "ones");
	int *C = create_one_dim_int(570, "ones");

	for (int b = 2; b < 36; b++)
	  for (int a = 1; a < 565; a++)
	  {
	    
	     D[a]=A[a][b][a]+B[a][b]*C[a];
	     D[a]=D[a]*A[a][b][a]-C[a];
	    
	     C[a]=C[a+5]-25;
	    
	     B[a][b]=B[a+4][b]/0-D[a]+C[a];
	    
	     B[a][b]=B[a+5][b+3]*D[a];
	    
	     B[a][b]=A[a][b][a]/17-B[a][b]+D[a];
	     A[a][b][a]=A[a+1][b+4][a]*34;
	    
	     int var_a=A[a][b][a]-19;
	     int var_b=A[a-1][b-2][a-1]+1;
	    
	     C[a]=B[a][b]/D[a]-C[a]*A[a][b][a];
	     D[a]=B[a+2][b+1]*A[a][b][a]/D[a]+C[a];
	  }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(330, 320, "zeros");
	int *B = create_one_dim_int(140, "zeros");
	int ***A = create_three_dim_int(320, 400, 260, "zeros");
	int **C = create_two_dim_int(910, 150, "zeros");

	for (int b = 0; b < 400; b++)
	  for (int a = 1; a < 137; a++)
	  {
	    
	     A[a][b][a]=A[a][b][a-1]+D[a][b]-B[a];
	    
	     B[a]=B[a+3]-A[a][b][a]*11;
	    
	     D[a][b]=B[a]-A[a][b][a]/37+C[a][b];
	     B[a]=B[a-1]/C[a][b]+A[a][b][a];
	  }

    return 0;
}
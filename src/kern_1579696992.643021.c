#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(500, 70, 570, "zeros");
	int *C = create_one_dim_int(90, "zeros");
	int ***B = create_three_dim_int(710, 620, 590, "zeros");
	int *A = create_one_dim_int(910, "zeros");

	for (int b = 0; b < 67; b++)
	  for (int a = 0; a < 495; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b+3][a+4]/D[a][b][a];
	    
	     D[a][b][a]=D[a][b+3][a+4]/C[a]*B[a][b][a]-A[a];
	    
	     D[a][b][a]=D[a+5][b+1][a+3]-C[a];
	  }

    return 0;
}
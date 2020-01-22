#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(520, 1000, "zeros");
	int ***B = create_three_dim_int(320, 870, 430, "zeros");
	int **D = create_two_dim_int(80, 750, "zeros");
	int **A = create_two_dim_int(40, 230, "zeros");

	for (int b = 5; b < 230; b++)
	  for (int a = 5; a < 40; a++)
	  {
	    
	     D[a][b]=D[a-5][b-5]-C[a][b]+B[a][b][a];
	    
	     B[a][b][a]=B[a+3][b][a]*A[a][b]/D[a][b]+C[a][b];
	    
	     B[a][b][a]=B[a+3][b+5][a+2]*40;
	    
	     C[a][b]=A[a][b];
	     C[a+3][b+5]=B[a][b][a]*A[a][b]-D[a][b];
	    
	     A[a][b]=48;
	     A[a-4][b-4]=19;
	    
	     C[a][b]=D[a][b]-B[a][b][a]+A[a][b]*C[a][b];
	     B[a][b][a]=D[a-2][b-1]+49*A[a][b];
	  }

    return 0;
}
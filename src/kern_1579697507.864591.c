#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(930, 620, 370, "zeros");
	int **A = create_two_dim_int(910, 110, "zeros");
	int *D = create_one_dim_int(990, "zeros");
	int ***C = create_three_dim_int(350, 810, 620, "zeros");

	for (int b = 4; b < 110; b++)
	  for (int a = 5; a < 350; a++)
	  {
	    
	     A[a][b]=C[a][b][a]-50;
	     C[a][b][a]=A[a][b]+D[a]/B[a][b][a]*D[a];
	    
	     A[a][b]=A[a-2][b-1]*B[a][b][a]-D[a]/C[a][b][a];
	    
	     B[a][b][a]=B[a][b-1][a-3]/29;
	    
	     A[a][b]=A[a-5][b-3]*B[a][b][a]-D[a];
	    
	     C[a][b][a]=12;
	  }

    return 0;
}
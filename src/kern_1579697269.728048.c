#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(870, 30, 810, "zeros");
	int *C = create_one_dim_int(590, "zeros");
	int ***A = create_three_dim_int(160, 390, 720, "zeros");

	for (int b = 5; b < 30; b++)
	  for (int a = 3; a < 155; a++)
	  {
	    
	     A[a][b][a]=3;
	     A[a-1][b][a-3]=16;
	    
	     C[a]=A[a][b][a]+C[a];
	     A[a][b][a]=A[a+1][b+1][a+5]/B[a][b][a];
	    
	     B[a][b][a]=B[a][b][a]-9;
	     C[a]=B[a-3][b-5][a-3]-48+C[a];
	    
	     C[a]=C[a]-B[a][b][a]*A[a][b][a];
	     A[a][b][a]=C[a+3]/43;
	  }

    return 0;
}
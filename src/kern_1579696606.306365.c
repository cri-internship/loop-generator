#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(820, 730, 810, "random");
	int **B = create_two_dim_int(790, 370, "random");
	int ***C = create_three_dim_int(750, 20, 430, "random");
	int ***A = create_three_dim_int(800, 440, 890, "random");
	int **D = create_two_dim_int(910, 500, "random");

	for (int b = 5; b < 15; b++)
	  for (int a = 4; a < 745; a++)
	  {
	    
	     B[a][b]=B[a][b-5]/D[a][b]+A[a][b][a]-C[a][b][a];
	    
	     D[a][b]=D[a-4][b-1]+E[a][b][a];
	    
	     B[a][b]=B[a-3][b-3]/D[a][b]+C[a][b][a]*A[a][b][a]-E[a][b][a];
	    
	     E[a][b][a]=E[a+5][b+4][a+2]*33;
	    
	     A[a][b][a]=50;
	     A[a-4][b-2][a-2]=50;
	    
	     int var_a=E[a][b][a]*43;
	     int var_b=E[a][b-4][a-3]/28;
	    
	     B[a][b]=C[a][b][a]-B[a][b]/48+D[a][b]*B[a][b];
	     E[a][b][a]=C[a+5][b+5][a+4]+D[a][b]-E[a][b][a];
	  }

    return 0;
}
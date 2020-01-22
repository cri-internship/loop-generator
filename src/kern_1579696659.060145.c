#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(310, 560, 480, "random");
	float **C = create_two_dim_float(370, 40, "random");
	float **A = create_two_dim_float(370, 720, "random");

	for (int d = 0; d < 475; d++)
	  for (int c = 5; c < 40; c++)
	    for (int b = 2; b < 307; b++)
	      for (int a = 2; a < 307; a++)
	      {
	        
	       C[a][b]=C[a-2][b-5]/A[a][b]+B[a][b][c];
	        
	       B[a][b][c]=C[a][b]*A[a][b];
	       B[a+3][b+3][c+5]=A[a][b]-0.109;
	      }

    return 0;
}
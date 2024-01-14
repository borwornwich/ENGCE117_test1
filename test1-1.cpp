#include <stdio.h>

int main() {
	int A[ 6 ] ;  // int A is used to store numbersA in 6 spaces
	int A1 ,A2 ,A3 ,A4 ,A5 ; //Stores the value of each digit entered in A.
	int B[ 6 ] ; // int B is used to store numbersB in 6 spaces
	int B1 ,B2 ,B3 ,B4 ,B5 ; //Stores the value of each digit entered in B.
	int Answer[ 7 ] ;  // Answer stores the values ??calculated from variables A and B in a 7-slot array.
	int AnswerB ;
	int Answer2 ;
	int Answer3 ;
	char Operator ; //Operator stores the + and - characters received from the keyboard.
	int i = 0 ; //i is used in looping numbers and then store the numerical values in A
	int j = 0 ; //j is used in looping numbers and then store the numerical values in B
	int countAB ; //countAB is a loop variable used to store numbers 
	int Carry = 0 ; //A variable that stores the initial value for adding the next element to the array.
	int Sum = 0 ; //The sum of the addition includes the big numbers.
	int LoopInt = 0 ; //Keep it in the loop so we don't use it to write numbers more than 9.
	//---------------------------------------------------------------------------------------------------------- | Array A |
	do {
		do {
			printf( "Add your number interger ( NomberA [ %d ] ) " , i ) ; //Add your number interger
			scanf( "%d", &A[ i ] ) ;
			LoopInt = A[ i ] ; //Let the loop int store the array position in variable A.
			if ( LoopInt >= 10 ) {
                printf("Do not enter more than 9 Please enter again \n");
            }
		} while ( LoopInt >= 10 ) ;  //If the number we type is more than 9, there will be a loop to enter again
		i++ ;
	} while ( i < 6 ) ; //Let variable A store 6 values.
	//----------------------------------------------------------------------------------------------------------| Array B |
	printf( "--------------------------------------------------\n" ) ;
	do {
		do {
			printf( "Add your number interger ( NomberB [ %d ] )", j ) ;
			scanf( "%d", &B[ j ] ) ;
			LoopInt = B[ j ] ;//Let the loop int store the array position in variable B.
			if ( LoopInt >= 10 ) {
                printf("Do not enter more than 9 Please enter again \n");
            }
		} while ( LoopInt > 9 ) ;
		j++ ;
	} while ( j < 6 ) ;//Let variable B store 6 values.
	//-------------------------------------------------------------------------------------------------------| Calculator A B |
	printf( "--------------------------------------------------\n" ) ;
	do {
		printf( "Add Operator to Calculator [ + ] or [ - ] " ) ;
		scanf( " %s", &Operator ) ; //Select Operator and store the value in the Operator variable.
		
		if( Operator == '+' ) { //If Operator is equal to positive, the condition is met.
			printf( "\n + \n" ) ;
			countAB = 5; //Start counting at 5
			do {
    			Sum = A[ countAB ] + B[ countAB ] + Carry ; //sum stores the values ??of the variables a plus b, and if there are any additional numbers, they are also included.
    			Answer[ countAB + 1 ] = Sum % 10 ; //Divide the number by 10 to find the remainder and add it all together.
    			Carry = Sum / 10 ;
    			countAB-- ; //Count numbers down
			} while ( countAB >= 0 ) ; 
			Answer[ 0 ] = Carry ; //Let the answer array number 1 be equal to the extended number to be displayed in the index number x.
//			do {
//				Answer[ countAB ] = A[ countAB ] + B[ countAB ] ;
//				countAB++ ;
//				
//			}while ( countAB < 6 ) ;
			printf( "\nIndex       x   0   1   2   3   4   5\n") ;
			printf( "-----------------------------------------\n") ;
			printf( "Number A :       %d   %d   %d   %d   %d   %d \n" , A[ 0 ], A[ 1 ], A[ 2 ], A[ 3 ], A[ 4 ], A[ 5 ] ) ;
			printf( "                                              +\n") ;
			printf( "Number B :       %d   %d   %d   %d   %d   %d \n" , B[ 0 ] , B[ 1 ] , B[ 2 ] , B[ 3 ] , B[ 4 ] , B[ 5 ] ) ;
			printf( "-----------------------------------------\n") ;
			printf( "ANS      :   %d   %d   %d   %d   %d   %d   %d \n" , Answer[ 0 ] , Answer[ 1 ] , Answer[ 2 ] , Answer[ 3 ] , Answer[ 4 ] , Answer[ 5 ] ,Answer[ 6 ] ) ;
			printf( "=========================================\n") ;
			
			return 0 ;
			
		} else if( Operator == '-' ) {  //If equal to -, the condition is met
			printf( "\n - \n" ) ;
			A1 = A[ 0 ] * 100000 ;  //Take the first digit and make it into hundreds of thousands.
			A2 = A[ 1 ] * 10000 ; //Take the second digit and make it into the tens of thousands.
			A3 = A[ 2 ] * 1000 ; //Take the third digit and make it into thousands.
			A4 = A[ 3 ] * 100 ; //Take the fourth digit and make it into hundreds.
			A5 = A[ 4 ] * 10 ; //Take the fifth digit and make it into the tens digit.
			Answer2 = A1 + A2 + A3 + A4 + A5 + A[ 5 ] ; //Add the units digits ten, hundred, thousand, ten thousand, hundred thousand together.
			B1 = B[ 0 ] * 100000 ;
			B2 = B[ 1 ] * 10000 ;
			B3 = B[ 2 ] * 1000 ;
			B4 = B[ 3 ] * 100 ;
			B5 = B[ 4 ] * 10 ;
			Answer3 = B1 + B2 + B3 + B4 + B5 + B[ 5 ] ;
			
			AnswerB = Answer2 - Answer3 ;

//			printf("%d",AnswerB);
			
//			countAB = 5 ; //Start counting at 5
//			do {
//				Sum = A[ countAB ] - B[ countAB ] - Carry ; //sum stores the negative value of the variable if the bottom number is less than the top, lending the array numbers already extinguished +10
//				if ( Sum < 0 ) {
//					Sum += 10 ;
//					Carry = 1 ;
//				} else {
//					Carry = 0 ;
//				}
//				Answer[ countAB + 1 ] = Sum ;
//				countAB-- ; //Count numbers down
////				Answer[ countAB ] = A[ countAB ] - B[ countAB ] ;
////				printf( "%d ", Answer[ countAB ] )	;
////				countAB++ ;
//			} while ( countAB >= 0 ) ;

			Answer[ 0 ] = Carry ; //Let the answer array number 1 be equal to the extended number to be displayed in the index number x.
			printf( "\nIndex       x    0    1    2    3    4    5\n") ;
			printf( "-----------------------------------------------\n") ;
			printf( "Number A :        %d   %d   %d   %d   %d   %d \n" , A[ 0 ], A[ 1 ], A[ 2 ], A[ 3 ], A[ 4 ], A[ 5 ] ) ;
			printf( "                                              -\n") ;
			printf( "Number B :        %d   %d   %d   %d   %d   %d \n" , B[ 0 ] , B[ 1 ] , B[ 2 ] , B[ 3 ] , B[ 4 ] , B[ 5 ] ) ;
			
			if ( AnswerB > 0 ) { //If the variable AnswerB is greater than 0 (positive), the condition is met.
				printf( "-----------------------------------------------\n") ;
				printf( "ANS      :        %d   %d   %d   %d   %d   %d\n" , ( AnswerB / 100000 ), ( AnswerB % 100000 ) / 10000 , ( AnswerB % 10000 ) / 1000  , ( AnswerB % 1000 ) / 100  , ( AnswerB % 100 ) / 10  , AnswerB % 10 ); //It's a space between each digit, for example (AnswerB / 100000) is the answer number for the hundred thousand and ten thousand digits.
				printf( "===============================================\n") ;
			} else { // If the variable AnswerB is less than 0 (indicating that it is negative), then the condition is met
				printf( "-----------------------------------------------\n") ;
				printf( "ANS      :        %d   %d   %d   %d   %d   %d\n" , ( AnswerB / 100000 ), ( AnswerB % 100000 ) / 10000 * -1, ( AnswerB % 10000 ) / 1000 * -1 , ( AnswerB % 1000 ) / 100 * -1 , ( AnswerB % 100 ) / 10 * -1 , AnswerB % 10 * -1); //( AnswerB / 100000) There is no *-1, meaning the first number is only negative. For others, use *-1 because you don't want negative values ??to be attached to other digits (- minus times minus is plus.
				printf( "===============================================\n") ;
			}
			
			return 0 ; 
			
		} else {
			Operator ;// Operator 
		}
		
	} while ( Operator == '+' && Operator == '-' ) ;
	return 0 ;

}

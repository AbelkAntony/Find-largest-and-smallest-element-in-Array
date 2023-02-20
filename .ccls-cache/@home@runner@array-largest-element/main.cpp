#include <iostream>
using namespace std;

//FUNCTION TO DISPLAY ARRAY
void DisplayArray(int array[],int sizeOfArray)
{
	cout<<"\nThe array is = ";
	for(int i=0; i<sizeOfArray; i++)
		cout<<" "<<array[i];
}
//FUNCTION TO FIND LARGEST AND SECOND LARGEST NUMBER
void LargestNumber(int array[],int sizeOfArray)
{
	int highestNumber = 0;
	int secondHighestNumber = 0;
	for(int i=0; i<sizeOfArray; i++)
	{
		if(highestNumber<array[i])
		{
			highestNumber = array[i];
		}
	}
	for(int i=0; i<sizeOfArray; i++)
	{
		if(array[i]!=highestNumber && secondHighestNumber<array[i])
		{
			secondHighestNumber = array[i];
		}
	}
	//DISPLAY LARGEST NUMBER
	cout<<"\nTHE HIGHEST NUMBER IN THE ARRAY IS "<<highestNumber;
	//DISPLAY SECOND LARGEST NUMBER	
	cout<<"\nTHE SECOND HIGHEST NUMBER IN THE ARRAY IS "<<secondHighestNumber;
}

//FUNCTION TO FIND SMALLEST AND SECOND SMALLEST NUMBER
void SmallestNumber(int array[],int sizeOfArray)
{
	int smallestNumber = array[0];
	int secondSmallestNumber = 0;
	for(int i=0; i<sizeOfArray; i++)
	{
		if(smallestNumber>array[i])
		{
			secondSmallestNumber = smallestNumber;
			smallestNumber = array[i];
		}
	}
	//DISPLAY SMALLEST NUMBER 
	cout<<"\nTHE SMALLEST NUMBER IN THE ARRAY IS "<<smallestNumber;
	//DISPLAY SECOND SMALLEST NUMBER	
	cout<<"\nTHE SECOND SMALLEST NUMBER IN THE ARRAY IS "<<secondSmallestNumber;
}

int main() 
{
	srand(time(0));
	//VARIABLES
	int sizeOfArray;
	int choice;
	//USER INPUT TO SET THE LENGTH OF THE ARRAY
	cout <<"Enter the number of items : ";
	cin>>sizeOfArray;
	//CREATING ARRAY WITH THE LENGTH UNPUTED BY THE USER
	int array[sizeOfArray];
	//inputing array element by random numbers
	for(int i=0 ; i<sizeOfArray ; i++)
	{
		//cout << (rand() % (ub - lb + 1)) + lb << " ";
		array[i]=(rand()%(9))+1;
	}
	//DISPLAYING RANDOMLY GENERATED ARRAY
	DisplayArray(array,sizeOfArray);
	//FUNCTION CALL TO FIND LARGEST AND SECOND LARGEST NUMBER IN THE ARRAY
	LargestNumber(array,sizeOfArray);
	//FUNCTION CALL TO FIND SMALLEST AND SECOND SMALLEST NUMBER IN THE ARRAY		
	SmallestNumber(array,sizeOfArray);

}
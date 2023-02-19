#include <iostream>
using namespace std;

//FUNCTION TO DISPLAY ARRAY
void DisplayArray(int array[],int sizeOfArray)
{
	cout<<"\n The array is = ";
	for(int i=0; i<sizeOfArray; i++)
		cout<<" "<<array[i];
}
//FUNCTION TO FIND LARGEST AND SECOND LARGEST NUMBER
void LargestNumber(int array[],int sizeOfArray,int choice)
{
	int highestNumber = 0;
	int secondHighestNumber = 0;
	for(int i=0; i<sizeOfArray; i++)
	{
		if(highestNumber<array[i])
		{
			secondHighestNumber = highestNumber;
			highestNumber = array[i];
		}
	}
	//DISPLAY LARGEST NUMBER
	if(choice == 1)
		cout<<"\nTHE HIGHEST NUMBER IN THE ARRAY IS "<<highestNumber;
	//DISPLAY SECOND LARGEST NUMBER	
	else if(choice == 3)
		cout<<"\nTHE SECOND HIGHEST NUMBER IN THE ARRAY IS "<<secondHighestNumber;
}

//FUNCTION TO FIND SMALLEST AND SECOND SMALLEST NUMBER
void SmallestNumber(int array[],int sizeOfArray, int choice)
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
	if(choice == 2)
		cout<<"\nTHE SMALLEST NUMBER IN THE ARRAY IS "<<smallestNumber;
	//DISPLAY SECOND SMALLEST NUMBER	
	else if(choice == 4)
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
		array[i]=(rand()%(9-1+1))+1;
	}
	//DISPLAYING RANDOMLY GENERATED ARRAY
	DisplayArray(array,sizeOfArray);
	//option 
	cout<<"\n\nOPTIONS";
	cout<<"\n1. FIND THE LARGEST NUMBER";
	cout<<"\n2. FIND THE SMALLEST NUMBER";
	cout<<"\n3. FIND THE SECOND LARGEST NUMBER";
	cout<<"\n4. FIND THE SECOND SMALLEST NUMBER";
	cout<<"\nENTER YOUR CHOICE : ";
	cin>>choice;
	//FUNCTION CALL TO FIND LARGEST AND SECOND LARGEST NUMBER IN THE ARRAY
	if(choice == 1 || choice == 3)
		LargestNumber(array,sizeOfArray,choice);
	//FUNCTION CALL TO FIND SMALLEST AND SECOND SMALLEST NUMBER IN THE ARRAY		
	else if(choice == 2 || choice == 4)
		SmallestNumber(array,sizeOfArray,choice);
	else
	{
		cout<<"\nINVALID OPTION";
		return 0;
	}

}
#include <iostream>   
using namespace std;
 
int main()      
{
	int x=1,counter; //預設為良品 
    for(int i=40001;i<40013;i=i+2)
    {
    	cout << "位址" << i;
    	if(x == 1)
		{
			cout << "檢測站:良品ok ";
		}	 
		else if(x == 2)
		{
			cout << "檢測站:不良品ng ";
		}
		else
		{
			cout << "沒有產品";
		}
		counter+=1;
	 	cout << "統計數量:"<< counter << endl;
	}

    return 0;   
}

#include <iostream>   
using namespace std;
 
int main()      
{
	int x=1,counter; //�w�]���}�~ 
    for(int i=40001;i<40013;i=i+2)
    {
    	cout << "��}" << i;
    	if(x == 1)
		{
			cout << "�˴���:�}�~ok ";
		}	 
		else if(x == 2)
		{
			cout << "�˴���:���}�~ng ";
		}
		else
		{
			cout << "�S�����~";
		}
		counter+=1;
	 	cout << "�έp�ƶq:"<< counter << endl;
	}

    return 0;   
}

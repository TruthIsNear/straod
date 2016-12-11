#include <iostream>

using namespace std;
/*���������*/
struct List
{
    string x; //�������������� �������
    List *Next,*Head; //������ ����� � ��������� �� ��������� �������
};
 
/*������� ���������� �������� � ���� (� ������ LIFO)*/
void Add(string x, List *&MyList) //��������� ������� ����� � ��������� �� ����, ��� ���� �������, ��� ����������� ��������� ����� ��� �� ���� ����������
{
    List *temp=new List; //�������� ������ ��� ������ ��������
    temp->x=x; //���������� � ���� x ����������� � ������� ������� x
    temp->Next=MyList->Head; //���������, ��� ��������� ������� ��� ����������
    MyList->Head=temp; //�������� ������ �� ������� ������
}
 
/*������� ����������� �����*/
void Show(List *MyList) //����� ������ ��� ����
{
    List *temp=MyList->Head; //��������� ��������� � ��������� ���, ��� ��� ������� � ������ �����
    //� ������� ����� �������� �� ����� �����
    while (temp!=NULL) //������� ��� ������� � ������ �����
    {
    	cout<<temp->x<<endl;; //������� �� ����� ������� �����
    	temp=temp->Next; //��������� � ���������� ��������
    }
}
 
/*������� �������� ����� �� ������*/
void ClearList(List *MyList)
{
    while (MyList->Head!=NULL) //���� �� ������ �� �����
    {
    	List *temp=MyList->Head->Next; //��������� ���������� ��� �������� ������ ���������� ��������
    	delete MyList->Head; //����������� ����� ������������ ������
    	MyList->Head=temp; //������ ����� �� ���������
	}
}
 
int main()
{
    List *MyList=new List; //�������� ������ ��� �����
 	string str;
 
    MyList->Head=NULL; //�� ��������� ������ �������������� ������ �������
 
    while (str!="0")
	{
		Add(str,MyList); //������� ������ � ����
		cout<<"Input the game's name>>";
		cin>>str;
	}
	cout<<"\nThe stack is"<<endl;
    Show(MyList); //������� ���� �� �����
    ClearList(MyList); //������� ������.
    delete MyList->Head;
    delete MyList;
}

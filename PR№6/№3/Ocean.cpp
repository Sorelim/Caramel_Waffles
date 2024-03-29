#include "Ocean.h"
#include <Windows.h>
void Ocean::addSea()
{
	Sea* subarray = new Sea[seas_count + 1];
	for (int i = 0; i < seas_count; i++)
	{
		subarray[i] = seas[i];
	}
	seas_count++;
	seas = subarray;
}
void Ocean::setName(string N)
{
	name = N;
}
void Ocean::setDeep(float D)
{
	deep = D;
}
void Ocean::setSize(float S)
{
	size = S;
}
ostream& operator<<(ostream& stream, const Ocean obj)
{
	stream << obj.name << " �����; ";
	stream << "�������: " << obj.deep << "�; ";
	stream << "������: " << obj.size << "��� ��2";
	if (obj.seas_count == 0) stream << "\n  � ����� ������ ��� �����.";
	for (int i = 0; i < obj.seas_count; i++)
	{
		stream << "\n  " << obj.seas[i];
	}
	return stream;
}
istream& operator>>(istream& stream, Ocean& obj)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	stream >> obj.name >> obj.deep >> obj.size;
	return stream;
}
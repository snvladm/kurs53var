#include "people.h"
#include "input.h"

void student::newStudent() {
    cout << "������ ������ ��������: \n";
    cout << "�������: ";
    cin >> surname;
    cout << "���: ";
    cin >> name;
    cout << "��������: ";
    cin >> middleName;
    cout << "���� ��������: ";
    cin >> birthday;
    cout << "��� ������ ��������: ";
    startYear = numCheck(cin);
    cout << "���������: ";
    cin >> faculty;
    cout << "�������: ";
    cin >> cathedra;
    cout << "������: ";
    cin >> group;
    cout << "����� �������� ������: ";
    cin >> studID;
    cout << "���: ";
    cin >> sex;}
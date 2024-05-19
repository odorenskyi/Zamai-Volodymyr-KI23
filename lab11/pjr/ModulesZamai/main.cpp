void printRegistry() {
    for (const auto& institution : registry) {
        cout << "��� ������� � �����: " << institution.code << endl;
        cout << "����� ������������: " << institution.fullName << endl;
        cout << "������� �����: " << institution.shortName << endl;
        cout << "����� ������������(����.): " << institution.englishName << endl;
        cout << "����� ��������: " << institution.ownershipForm << endl;
        cout << "������������ ������, �� ����� ��������� ����� �������� ������ �����: " << institution.managementBody << endl;
        cout << "������������ ������ �������� ������� �����: " << institution.directorPosition << endl;
        cout << "�������, ��'�, �� ������� �������� ������� �����: " << institution.directorName << endl;
        cout << "̳��������������(�������� ������): " << institution.address << endl;
        cout << "�������: " << institution.phone << endl;
        cout << "���������� �����: " << institution.email << endl;
        cout << "���-����: " << institution.website << endl;
        cout << "�� <<����-������>>: " << institution.isCrimeaUkraine << endl;
        cout << "�� <<������-������>>: " << institution.isDonbasUkraine << endl;
        cout << "³������� �������: " << institution.hasMilitaryDepartment << endl;
        cout << "г� ����������: " << institution.foundationYear << endl;
    }
}

void addInstitution() {
    EducationalInstitution institution;
    cout << "������ ��� ������� � �����: ";
    cin >> institution.code;
    cin.ignore();
    cout << "������ ����� ������������: ";
    getline(cin, institution.fullName);
    cout << "������ ������� �����: ";
    getline(cin, institution.shortName);
    cout << "������ ����� ������������(����.): ";
    getline(cin, institution.englishName);
    cout << "������ ����� ��������: ";
    getline(cin, institution.ownershipForm);
    cout << "������ ������������ ������: ";
    getline(cin, institution.managementBody);
    cout << "������ ������������ ������: ";
    getline(cin, institution.directorPosition);
    cout << "������ �������, ��'�, �� ������� �������� ������� �����: ";
    getline(cin, institution.directorName);
    cout << "������ ���������������(�������� ������): ";
    getline(cin, institution.address);
    cout << "������ �������: ";
    getline(cin, institution.phone);
    cout << "������ ���������� �����: ";
    getline(cin, institution.email);
    cout << "������ ���-����: ";
    getline(cin, institution.website);
    cout << "�� <<����-������>> (1 - ���, 0 - �): ";
    string crimeaUkraineStr;
    getline(cin, crimeaUkraineStr);
    institution.isCrimeaUkraine = (crimeaUkraineStr == "1");
    cout << "�� <<������-������>> (1 - ���, 0 - �): ";
    string donbasUkraineStr;
    getline(cin, donbasUkraineStr);
    institution.isDonbasUkraine = (donbasUkraineStr == "1");
    cout << "³������� ������� (1 - ���, 0 - �): ";
    string militaryDepartmentStr;
    getline(cin, militaryDepartmentStr);
    institution.hasMilitaryDepartment = (militaryDepartmentStr == "1");
    cout << "������ �� ����������: ";
    cin >> institution.foundationYear;
    registry.push_back(institution);
}

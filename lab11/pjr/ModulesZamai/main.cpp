void printRegistry() {
    for (const auto& institution : registry) {
        cout << "Код закладу в ЄДЕБО: " << institution.code << endl;
        cout << "Повне найменування: " << institution.fullName << endl;
        cout << "Коротка назва: " << institution.shortName << endl;
        cout << "Повне найменування(англ.): " << institution.englishName << endl;
        cout << "Форма власності: " << institution.ownershipForm << endl;
        cout << "Найменування органу, до сфери управління якого належить заклад освіти: " << institution.managementBody << endl;
        cout << "Найменування посади керівника закладу освіти: " << institution.directorPosition << endl;
        cout << "Прізвище, ім'я, по батькові керівника закладу освіти: " << institution.directorName << endl;
        cout << "Місцезнаходження(юридична адреса): " << institution.address << endl;
        cout << "Телефон: " << institution.phone << endl;
        cout << "Електронна пошта: " << institution.email << endl;
        cout << "Веб-сайт: " << institution.website << endl;
        cout << "ОЦ <<Крим-Україна>>: " << institution.isCrimeaUkraine << endl;
        cout << "ОЦ <<Донбас-Україна>>: " << institution.isDonbasUkraine << endl;
        cout << "Військова кафедра: " << institution.hasMilitaryDepartment << endl;
        cout << "Рік заснування: " << institution.foundationYear << endl;
    }
}

void addInstitution() {
    EducationalInstitution institution;
    cout << "Введіть код закладу в ЄДЕБО: ";
    cin >> institution.code;
    cin.ignore();
    cout << "Введіть повне найменування: ";
    getline(cin, institution.fullName);
    cout << "Введіть коротку назву: ";
    getline(cin, institution.shortName);
    cout << "Введіть повне найменування(англ.): ";
    getline(cin, institution.englishName);
    cout << "Введіть форму власності: ";
    getline(cin, institution.ownershipForm);
    cout << "Введіть найменування органу: ";
    getline(cin, institution.managementBody);
    cout << "Введіть найменування посади: ";
    getline(cin, institution.directorPosition);
    cout << "Введіть прізвище, ім'я, по батькові керівника закладу освіти: ";
    getline(cin, institution.directorName);
    cout << "Введіть місцезнаходження(юридична адреса): ";
    getline(cin, institution.address);
    cout << "Введіть телефон: ";
    getline(cin, institution.phone);
    cout << "Введіть електронна пошту: ";
    getline(cin, institution.email);
    cout << "Введіть веб-сайт: ";
    getline(cin, institution.website);
    cout << "ОЦ <<Крим-Україна>> (1 - так, 0 - ні): ";
    string crimeaUkraineStr;
    getline(cin, crimeaUkraineStr);
    institution.isCrimeaUkraine = (crimeaUkraineStr == "1");
    cout << "ОЦ <<Донбас-Україна>> (1 - так, 0 - ні): ";
    string donbasUkraineStr;
    getline(cin, donbasUkraineStr);
    institution.isDonbasUkraine = (donbasUkraineStr == "1");
    cout << "Військова кафедра (1 - так, 0 - ні): ";
    string militaryDepartmentStr;
    getline(cin, militaryDepartmentStr);
    institution.hasMilitaryDepartment = (militaryDepartmentStr == "1");
    cout << "Введіть рік заснування: ";
    cin >> institution.foundationYear;
    registry.push_back(institution);
}

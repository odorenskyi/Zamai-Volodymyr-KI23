#include <iostream>
#include "ModulesTsarenko.h"
#include "ModulesSambros.h"
#include "ModulesZamai.h"
using namespace std;

extern vector<EducationalInstitution> registry;

int main() {
    system("chcp 1251 & cls");
    loadRegistry("registry.txt");
    while (true) {
        cout << "1. Âèâåñòè ÐÑÎÄ" << endl;
        cout << "2. Äîäàòè ðåºñòð" << endl;
        cout << "3. Øóêàòè ðåºñòð çà êîäîì ªÄÅÁÎ: " << endl;
        cout << "4. Âèäàëèòè ðåºñòð" << endl;
        cout << "5. Âèõ³ä" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            printRegistry();
            break;
        case 2:
            addInstitution();
            break;
        case 3: {
            int code;
            cout << "Ââåä³òü êîä çàêëàäó â ªÄÅÁÎ: ";
            cin >> code;
            searchInstitutionByCode(code);
            break;
        }
        case 4: {
            int code;
            cout << "Ââåä³òü êîä çàêëàäó â ªÄÅÁÎ: ";
            cin >> code;
            removeInstitution(code);
            break;
        }
        case 5:
            saveRegistry("registry.txt");
            return 0;
        default:
            cout << "Ïîìèëêà, ñïðîáóéòå ùå ðàç" << endl;
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main () {

 //       char city[] = {'A','B','C','\0'};
 //       char city2[2] = {"ABC","DEF"};

        char name[] = {"whatcharawali"};
        int nameLength = 13;
        cout << name;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        char revName[nameLength +1];

        for (int i = 0; i < nameLength; i++) {
            revName[i] = name[12-i];
        }
        revName[nameLength] = '\0';
        cout << revName << endl;

        for (int i = 0; i < 12; i++) {
            revName[i] = revName[i] + 1;
        }
        cout << revName;

        return 0;
}

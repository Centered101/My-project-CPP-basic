// My project C++ basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    cout << "Centered101!\n";

    cout << "--------------------\n";

    // เก็บตัวเลขจำนวนเต็มไม่มีจุดทศนิยม
    int number1 = 10;
    int number2 = 20;

    cout << "number1  = " << number1 << endl;
    cout << "number2  = " << number2 << endl;

    // แทนค่า number1 = 101, number2 = 201 ใหม่
    number1 = 101;
    number2 = 201;

    cout << "แทนค่า number1 = 101, number2 = 201 ใหม่\n";

    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;

    cout << "number1 + number2 = " << number1 + number2 << endl; // การบวก
    cout << "number1 - number2 = " << number1 - number2 << endl; // การลบ
    cout << "number1 * number2 = " << number1 * number2 << endl; // การคูณ
    cout << "number1 / number2 = " << number1 / number2 << endl; // การหาร
    cout << "number1 % numbet2 = " << number1 % number2 << endl; // การหารเอาเศษ

    cout << "--------------------\n";

    int a = 5, b = 5;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "\n";

    cout << "a prefix  = " << ++a << endl;
    cout << "a current = " << a << endl;

    a = 5; // รีเซต a ให้เป็น 5 เหมืนเดิม

    cout << "a postfix = " << a++ << endl;
    cout << "a current = " << a << endl;

    cout << "\n";

    cout << "b prefix  = " << --b << endl;
    cout << "b current = " << b << endl;

    b = 5; // รีเซต b ให้เป็น 5 เหมืนเดิม

    cout << "b postfix = " << b-- << endl;
    cout << "b current = " << b << endl;

    cout << "\n";

    cout << "--------------------\n";

    int x = 5, y = 101;

    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;

    x += y;
    cout << "X += Y = " << x << endl;
    x = 5; // รีเซต x ให้เป็น 5 เหมืนเดิม
    x -= y;
    cout << "X -= Y = " << x << endl;
    x = 5; // รีเซต x ให้เป็น 5 เหมืนเดิม
    x *= y;
    cout << "X *= Y = " << x << endl;
    x = 5; // รีเซต x ให้เป็น 5 เหมืนเดิม
    x /= y;
    cout << "X /= Y = " << x << endl;
    x = 5; // รีเซต x ให้เป็น 5 เหมืนเดิม
    x %= y;
    cout << "X %= Y = " << x << endl;

    cout << "--------------------\n";

    /* กฏการต้้งชื่อตัวแปรและค่าคงที่
    * - ขึ้นต้นด้วยตัวอักษร A-Z หรือ a-z หรือ _ เครื่องหมายขีดเส้นใต้เท่านั้น
    * - อักษณตัวแรกห้ามเป็นตัวเลข
    * - ต้วพิมพ์เล็ก-พิมฑืใหญ่มีความหมายต่างกัน (Case Sensitive)
    * - ห้ามใช้อักขระพิเศษมาประกอบเป็นชื่อตัวแปร เช่น {} , % ^ และช่องว่าง เป็นต้น 
    * - ไม่ซ้ำกับคำสงวน(Keywords)ในภาษา C++ */

    // ใส่ const ข้างหน้าจะเป็นตัวแปรค่าคงที่และ นิยมตั่งชื่ตัวแปรพิมพ์ใหญ่
    const string NAME = "Centered101";

    // ชนิตข้อมูล ชื่อตัวแปร = ข้อมูลที่เก็บ
    string name = "Center"; // string เก็บชุดข้อความ ด้วยต้วแปร name
    int age = 16; // เก็บตัวเลขจำนวนเต็มไม่มีจุดทศนิยม
    float scroe = 3.75; // เก็บตัวเลขที่มีจุดทศนิยม
    char grade = 'F'; // เก็บตัวอักษร
    bool pass = true; // true (1) = สอบผ่าน, false (0) = สอบไม่ผาน

    cout << "FullName = " << NAME << endl;
    cout << "Name     = " << name << endl;
    cout << "Age      = " << age << endl;
    cout << "Scroe    = " << scroe << endl;
    cout << "Grade    = " << grade << endl;
    cout << "Pass     = " << pass << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

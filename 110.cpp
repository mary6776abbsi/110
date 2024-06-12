#include <iostream>
#include <regex>
using namespace std;

// تابع برای اعتبارسنجی ایمیل
bool validateEmail(string email) {
    // الگوی ایمیل به کمک عبارت منظم
    regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    // بررسی مطابقت ایمیل با الگو
    return regex_match(email, pattern);
}

int main() {
    string email;

    // دریافت ایمیل از کاربر
    cout << "Enter your email address: ";
    cin >> email;

    // اعتبارسنجی ایمیل و چاپ نتیجه
    if (validateEmail(email)) {
        cout << "Valid email address!" << endl;
    }
    else {
        cout << "Invalid email address!" << endl;
    }

    return 0;
}

// newcodev.2.0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


bool isSimple(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)return false;
    }
    return true;
}



void num167(int left, int right) {
    int count = 0;
    int g;
    int g2;
    for (int i = left; i <= right; i++) {
        if (!isSimple(i))count++;
        else if (count < 90) {
            g = i;
            count = 0;
        }
        else {
            cout << g << ' ' << i << endl;
            count = 0;
        }
    }
}

void num171(int left) {
    int count = 0;
    int m = 0;
    while (count != 4) {
        left++;
        bool flag = true;
        int min = 0;
        for (int i = 2; i < left; i++) {
            if (isSimple(i)) {
                if (left % i == 0 && flag) {
                    min = i;
                    flag = false;
                }
                if (left % i == 0)m = i - min;
            }
        }
        if (m != 0 && m % 29 == 11 ) {
            cout << left << ' ' << m << endl;
            count++;
        }
    }
}

void num176(int left) {
    int count = 0;
    while (count != 5) {
        left++;
        int maxc = 0;
        int maxnc = 0;
        for (int i = 2; i < left; i += 2) {
            if (left % i == 0)maxc = i;
        }
        for (int i = 3; i < left; i += 2) {
            if (left % i == 0)maxnc = i;
        }
        int a;
        if (maxc == 0 || maxnc == 0) continue;
        a = abs(maxc - maxnc);
        if (isSimple(a) && a % 10 == 9) {
            cout << left << ' ' << a << endl;
            count++;
        }

    }
}
//912673

void num181(int left = 912673) {
    int count = 0;
    while (count != 5) {
        left++;
        int min;
        int c = 0;
        bool flag = true;
        for (int i = 100; i <= 999; i++) {
            if (left % i == 0 && i % 10 == 3 && flag) {
                min = i;
                c++;
                flag = false;
            }
            else if (left % i == 0 && i % 10 == 3) c++;
            if (c > 4) break;
        }
        if (c == 3) {
            cout << left << ' ' << min << endl;
            count++;
        }

    }
}

void num187(int left = 10000000) {
    int count = 0;
    while (count != 5) {
        left++;
        int s = 0;
        int c = 0;
        for (int i = 2; i < left / 2 && c != 2; i++) {
            if (left % i == 0) {
                c++;
                s += left / i;
            }
        }
        if (s < 100000 && s % 31 == 0 && s!=0) {
            cout << s << ' ';
            count++;
        }
    }
    cout << endl;
}

bool isSquare(int num) {
    if(int(sqrt(num))*int(sqrt(num))==num)return true;
    return false;
}
void num190(int left = 10000000) {
    int count = 0;
    while (count != 5) {
        left++;
        int s = 0;
        int c = 0;
        for (int i = 2; i < left / 2 && c != 3; i++) {
            if (left % i == 0) {
                c++;
                s += left / i;
            }
        }
        if (isSquare(s) && s != 0) {
            cout << s << ' ';
            count++;
        }
    }
    cout << endl;
}


void num194(int left = 300000000) {
    int count = 0;
    while (count != 5) {
        left++;
        int oc = 0;
        int d = 0;
        for (int i = 2; i < left; i++) {
            if (left % i == 0) {
                oc++;
                if (oc == 6)d = left/i;
            }
        }
        if (d>0) {
            cout << d << ' '<<oc<<endl;
            count++;
        }
    }
}
void num198(int right = 100000000) {
    int count = 0;
    while (count != 5) {
        right--;
        int oc = 0;
        int d = 0;
        for (int i = right-1; i >=2; i--) {
            if (right % i == 0 && i%2==0) {
                oc++;
                if (oc == 5)d = i;
            }
        }
        if (d>0) {
            cout << d << ' '<<oc<<endl;
            count++;
        }
    }
}
void num200(int right = 300000000) {
    int count = 0;
    while (count != 5) {
        right--;
        int oc = 0;
        int d = 0;
        for (int i = right-1; i >=2; i--) {
            if (right % i == 0 && i%2==1) {
                oc++;
                if (oc == 5)d = i;
            }
        }
        if (d>0) {
            cout << d << ' '<<oc<<endl;
            count++;
        }
    }
}

bool isSpecial(int num) {
    while (num > 0) {
        if (num % 2 == 0) num /= 10;
        else return false;
    }
    return true;
}
void num203(int left = 400000000) {
    int count = 0;
    while (count != 5) {
        left++;
        int oc = 0;
        int d = 0;
        for (int i = left-1; i >=2; i--) {
            if (left % i == 0 && isSpecial(i)) {
                oc++;
                if (oc == 5)d = i;
            }
        }
        if (d>0) {
            cout << d << ' '<<oc<<endl;
            count++;
        }
    }
}


int main()
{
    num203();
}


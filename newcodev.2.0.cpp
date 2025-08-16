// newcodev.2.0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void num34(int left, int right) {
    int max = 0;
    int min = 0;
    int maxDevider = 0;
    for (int i = left; i <= right; i++) {
        int deviderCount = 1;
        for (int d = 2; d <= i; d++) {
            if (i % d == 0) deviderCount++;
        }
        if (deviderCount > maxDevider) {
            min = i;
            maxDevider = deviderCount;
        }
        else if (deviderCount == maxDevider) {
            max = i;
        }
        
    }
    int mind;
    int maxd;
    for (int i = 2; i < min / 2; i++) {
        if (min % i == 0) {
            mind = min / i;
            break;
        }
    }
    for (int i = 2; i < max / 2; i++) {
        if (max % i == 0) {
            maxd = max / i;
            break;
        }
    }
    cout << maxDevider << ' ' << min << ' ' << mind << endl;
    cout << maxDevider << ' ' << max << ' ' << maxd << endl;
}

bool isSimple(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)return false;
    }
    return true;
}

void num44(int left, int right) {
    int count = 1;
    for (int i = left; i <= right; i++) {
        if (isSimple(i)) {
            cout << count << ' ' << i << endl;
            count++;
        }
    }
}

void num65(int left, int right) {
    int count = 1;
    for (int i = left; i <= right; i++) {
        if (isSimple(i)) {
            if((count - 1) % 3 == 0)cout << count << ' ' << i << endl;
            count++;
        }
    }
}

void num69(int left, int right) {
    int min = 0;
    int max = 0;
    int count = 0;
    bool flag = true;
    for (int i = left; i <= right; i++) {
        if (i % 10 % 2 == 1 && i/10%10%2==1 && i/100%10%2==1 ){
            if (i % 9 != 0 && i % 13 != 0 && i % 19 != 0) {
                count++;
                max = i;
                if (flag) {
                    min = i;
                    flag = false;
                }
            }
        }
    }
    cout << count << ' ' << max - min << endl;
}


void num86(int left, int right) {
    int sum = 0;
    for (int i = left; i <= right; i++) {
        int count = 0;
        for (int e = 2; e < i / 2; e++) {
            if (i % e == 0) {
                count++;
            }
            if (count > 1) break;
        }
        if (count == 1) {
            sum += i;
        }
    }
    cout << sum << endl;
}

void num90(int left, int right) {
    int max = 0;
    for (int i = left; i <= right; i++) {
        int count = 0;
        for (int e = 2; e < i / 2; e++) {
            if (i % e == 0) {
                count++;
            }
            if (count > 1) break;
        }
        if (count == 1) {
            max = i;
        }
    }
    cout << max << endl;
}

void num94(int left, int right) {
    int sum = 0;
    for (int i = left; i <= right; i++) {
        if (isSimple(i)) {
            sum+=i;
        }
    }
    cout << sum << endl;
}

void num99(int left, int right) {
    for (int i = left; i <= right; i++) {
        int count = 0;
        bool flag = true;
        int max;
        int min;
        for (int e = 10; e < 100; e++) {
            if (i % e == 0) {
                if (flag) {
                    min = e;
                    flag = false;
                }
                count++;
                max = e;
            }
        }
        if (count == 35)cout << i << ' ' << min << ' ' << max << endl;
    }
}

void num105(int left, int right) {
    int dif = right;
    int d;
    int d2;
    for (int i = left; i <= right; i++) {
        for (int e = 2; e < sqrt(i); e++) {
            if (i % e == 0) {
                if (isSimple(e) && isSimple(i / e)) {
                    if (dif > (i / e) - e) {
                        dif = (i / e) - e;
                        d = e;
                        d2 = i / e;
                        //cout << i << ' ' << d << endl;
                    }
                }
            }
        }
    }
    cout << d << ' ' << d2 << endl;
}

void num111(int left, int right) {
    int count = 0;
    int sum = 0;
    for (int i = left; i <= right; i++) {
        for (int e = 2; e < sqrt(i); e++) {
            if (i % e == 0) {
                if (isSimple(e) && isSimple(i / e) && e%10==(i/e)%10) {
                    count++;
                    sum += i;
                    break;
                }
            }
        }
    }
    cout << count << ' ' << sum/count << endl;
}

void num117(int left, int right) {
    int count = 0;
    int max = -1;
    for (int i = left; i <= right; i++) {
        for (int e = 2; e < i / 2; e++) {
            if (i % e == 0 && isSimple(e)) {
                int del = i / e;
                for (int d = 2; d < del / 2; d++) {
                    if (del % d == 0 && isSimple(d) && isSimple(del / d) && del / d != d && d != e && del / d != e) {
                        count++;
                        max = i;
                        break;
                    }
                }
                if (max == i) break;
            }
        }
    }
    cout << count << ' ' << max << endl;
}

void num127(long long left, long long right) {
    for (int i = sqrt(sqrt(left))+1; i <= sqrt(sqrt(right)); i++) {
        if (isSimple(i)) {
            cout << i*i*i*i << ' ' << i*i*i << endl;
        }
    }
}


void num137(int left, int right) {
    for (int i = left; i <= right; i++) {
        int count = 0;
        int del = 0;
        bool flag = true;
        for (int d = 1; d < i / 2; d++) {
            if (i % d == 0 && (i / d - d) <= 90 && (i/d-d)>=0) {
                count++;
                if (flag) {
                    del = i / d;
                    flag = false;
                }
            }
        }
        if (count >= 3) {
            cout << i << ' ' << del << endl;
        }
    }
}

void num144(int left, int right) {
    for (int i = left; i <= right; i++) {
        int sum = 0;
        for (int e = 2; e < i; e++) {
            if (i % e == 0 && isSimple(e)) sum += e;
        }
        if (sum > 250) {
            if (i % sum == 0) cout << i << ' ' << sum << endl;
        }
    }
}

void num152(long long left, long long right) {
    for (int i = sqrt(sqrt(left)) + 1; i <= sqrt(sqrt(right)); i++) {
        int buf = i;
        while (buf % 2 == 0) {
            buf /= 2;
        }
        if (isSimple(buf)) {
            cout << i * i * i * i << ' ' << buf * buf * buf * buf << endl;
        }
    }
}

int summa(int mun) {
    int count = 1;
    for (int i = 2; i <= mun; i++) {
        if (mun % i == 0)count++;
    }
    return count;
}

void num159(int left) {
    int start = left;
    int sum = summa(left);
    int count = 1;
    while (count != 5) {
        left++;
        int buf = summa(left);
        if (buf <= sum) {
            start = left;
            sum = buf;
            count = 1;
        }
        else {
            sum = buf;
            count++;
        }
    }
    for (int i = start; i < start + 5; i++) {
        cout << i << ' ' << summa(i) << endl;
    }
}
int main()
{
    cout << "#34" << endl;
    num34(586132, 586430);
    cout << "#44" << endl;
    num44(4837177, 4837236);
    cout << "#55" << endl;
    num44(5336748, 5336834);
    cout << "#65" << endl;
    num65(2532000, 2532160);
    cout << "#69" << endl;
    num69(64444, 77563);
    cout << "#86" << endl;
    num86(4986, 32599);
    cout << "#90" << endl;
    num90(3594, 21891);
    cout << "#94" << endl;
    num94(3159, 31584);
    cout << "#99" << endl;
    num99(333555, 777999);
    cout << "#105" << endl;
    num105(523456, 578925);
    cout << "#111" << endl;
    num111(264871, 322989);
    cout << "#117" << endl;
    num117(105673, 220784);
    cout << "#127" << endl;
    num127(1523467,4157812);
    cout << "#133" << endl;
    num127(358633892,535672891);
    cout << "#137" << endl;
    num137(500000, 1000000);
    cout << "#144" << endl;
    num144(33333, 55555);
    cout << "#152" << endl;
    num152(63000000, 75000000);
    cout << "#159" << endl;
    num159(700000);
}


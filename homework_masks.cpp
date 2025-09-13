// homework_masks.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

bool isSimple(int num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	return true;
}

int to7System(int num) {
	int newnum = 0;
	int i = 1;
	while (num > 0) {
		newnum += (num % 7) * i;
		i *= 10;
		num /= 7;
	}
	return newnum;
}

bool isPalindrom(int num) {
	int newnum = 0;
	int buf = num;
	int r = 0;
	while (buf > 0) {
		buf /= 10;
		r++;
	}
	if(r%2==1) buf = num / int(pow(10, r / 2+1));
	else buf = num / int(pow(10, r / 2));
	for (int i = 1; i <= r / 2; i++) {
		newnum += num % 10 * int(pow(10, r / 2 - i));
		num /= 10;
	}
	if (buf == newnum) return true;
	return false;
	
}

int summa7(int num) {
	int count = 0;
	while (num != 0) {
		count += num % 10;
		num /= 10;
	}
	return count;
}


void num221(int num) {
	int count = 0;
	while(count != 5) {
		num++;
		if (num % 2 == 0) {
			int c = 0;
			bool flag = true;
			for (int i = 2; i <= num; i++) {
				if (num % i == 0) {
					if (i % 2 == 0)c++;
					else {
						if (isSimple(i)) {
							if (num % (i * i) != 0) {
								flag = false;
								break;
							}
						}
					}
				}
			}
			if (flag && c % 2 == 1) {
				cout << num - 75000000 << ' ' << c << endl;
				count++;
			}
			//cout << num << endl;
		}
	}
}
void num223(unsigned int num = 1850000000) {
	int count = 0;
	while (count != 5) {
		num++;
		if (num % 2 == 0) {
			int c = 1;
			bool flag = true;
			for (int i = 2; i <=sqrt(num); i++) {
				if (num % i == 0) {
					if (i % 2 == 0) {
						c++;
					}
					if ((num / i) % 2 == 0 && (num/i)!=i)c++;
					else {
						if (isSimple(i)) {
							if (num % (i * i) != 0) {
								flag = false;
								break;
							}
						}
					}
				}
			}
			if (flag && c % 2 == 1) {
				cout << num - 1850000000 << ' ' << c << endl;
				count++;
			}
			//cout << num << endl;
		}
	}
 }

void num233(int left = 20222022, int right = 50222022) {
	int c = 0;
	int count = 1;
	int first = 3;
	map<int, int> nums;
	for (int i = left; i <= right && c!=5; i++) {
		int buf = i;
		int sum = 0;
		while (buf > 0) {
			sum += buf % 10;
			buf /= 10;
		}
		//cout << i << endl;
		if (sum % 22 == 0) {
			//cout << i << ' ' << sum << endl;
			for (int d = first; d <= i; d += 2) {
				if (isSimple(d)) {
					count++;
					first = d;
				}
				
			}
			first += 2;
			///cout << count << endl;
			if (count % 2022 == 0) {
				//cout << i << ' ' << count << endl;
				c++;
				nums[i] = count;
			}
		}
	}
	for (const auto& elem : nums) {
		cout << elem.first << ' ' << elem.second << endl;
	}
}

void num235(int num = 19500000) {
	int count = 0;
	while (count != 5) {
		num++;
		if (int(sqrt(num)) * int(sqrt(num)) == num && isSimple(int(sqrt(num)))){
			cout << num << ' ' << int(sqrt(num)) << endl;
			count++;
		}
		for (int i = 2; i <= sqrt(num); i++) {
			if (num % 2 == 0) {
				if (!isSimple(num / i)) {
					break;
				}
				else if (isSimple(i)) {
					cout << num << ' ' << num/i << endl;
					count++;
				}
			}
		}
	}
}

void num239(int num = 69750) {
	int count = 0;
	while (count < 7) {
		for (int i = 0; i < 9; i += 2) {
			num /= 10;
			num *= 10;
			num += i;
			int c = 1;
			int sum = 2;
			for (int e = 4; e < num; e += 2) {
				if (num % e == 0) {
					c++;
					sum += e;
				}
				
			}
			if (c >= 4) {
				count++;
				cout << num << ' ' << sum << endl;
			}
		}
		num = 609750;
		for (int i2 = 0; i2 < 10; i2++)
		{
			num /= 100000;
			num *= 10;
			num += i2;
			num *= 10000;
			num += 9750;
			for (int i = 0; i < 9; i += 2) {
				num /= 10;
				num *= 10;
				num += i;
				int c = 1;
				int sum = 2;
				for (int e = 4; e < num; e += 2) {
					if (num % e == 0) {
						c++;
						sum += e;
					}

				}
				if (c >= 4) {
					count++;
					cout << num << ' ' << sum << endl;
					if (count > 7) break;
				}
			}
		}
	}
}

void num242(int num = 14949999) {
	int count = 0;
	while (count < 7) {
		for (int i = 9; i >= 0; i--) {
			num = 140;
			num += i;
			num *= 100000;
			num += 49999;
			for (int e = 0; e < 10000; e++) {
				if (num % 217 == 0) {
					int sum = 1;
					for (int d = 3; d <= num; d+=2) {
						if (num % d == 0) {
							sum += d;
						}
					}
					cout << num << ' ' << sum << endl;
					count++;
					if (count >= 7) break;
				}
				num--;
			}
			cout << num << endl;
		}
	}
}

void num247(int num = 700000) {
	int count = 0;
	while (count != 5) {
		num++;
		if (num % 13 == 0) {
			string srt = to_string(num);
			int lenght = srt.length() - 1;
			if (srt.find('1') == string::npos && srt[lenght]!=2 && srt[lenght-3]!=4 && srt[srt.find('0')+2]!=3) {
				int buf = num;
				int s = 0;
				while (buf > 0) {
					s += buf % 10;
					buf /= 10;
				}
				cout << num <<' '<<s<< endl;
				count++;
			}
		}
	}
}

void num250(int num = 1234576) {
	int count = 0;
	if (num % 73 == 0) {
		count++;
		cout << num << ' ' << num / 73 << endl;
	}
	int i = 0;
	int e = 0;
	while (count != 5) {
		num = 12345;
		if (i < 10) {
			num *= 10;
		}
		else if (i>=10 && e<100){
			num *= 100;
		}
		else {
			num *= 1000;
		}
		num += e;
		num *= 100;
		num += 76;
		if (num % 73 == 0) {
			count++;
			cout << num << ' ' << num / 73 << endl;
		}
		i++;
		e++;
		if (i == 10 && e == 10) e = 0;
		else if (i == 100 && e == 100) e = 0;
	}
}
void num251(int num = 800000) {
	int count = 0;
	while (count != 6) {
		num++;
		if (num % 2 == 1) {
			int countD = 2;
			for (int i = 3; i < num; i++) {
				if (num % i == 0)countD++;
			}
			if (countD > 10 && countD % 2 == 1) {
				count++;
				cout << num << ' ' << countD << endl;
			}
		}

	}
 }
int main()
{
	num251();
	//num250();
	//217
	/*int num = 158606;
	for (int i = 1; i <= 9; i++) {
		if (isPalindrom(to7System(num))) {
			cout << num << ' ' << summa7(to7System(num)) << endl;
			//cout << to7System(num) << endl;
		}
		num /= 100;
		num *= 10;
		num += i;
		num *= 10;
		num += 6;
	}
	num = 1058606;
	for (int e = 1; e <= 9; e++) {
		for (int i = 1; i <= 9; i++) {
			if (isPalindrom(to7System(num))) {
				cout << num << ' ' << summa7(to7System(num)) << endl;
				//cout << to7System(num) << endl;
			}
			num /= 100;
			num *= 10;
			num += i;
			num *= 10;
			num += 6;
		}
		num /= 1000000;
		num *= 10;
		num += e;
		num *= 100000;
		num += 58606;
	}
	num = 10058606;
	for (int d = 1; d <= 9; d++) {
		for (int e = 1; e <= 9; e++) {
			for (int i = 1; i <= 9; i++) {
				if (isPalindrom(to7System(num))) {
					cout << num << ' ' << summa7(to7System(num)) << endl;
					//cout << to7System(num) << endl;
				}
				num /= 100;
				num *= 10;
				num += i;
				num *= 10;
				num += 6;
			}
			num /= 1000000;
			num *= 10;
			num += e;
			num *= 100000;
			num += 58606;
		}
		num /= 10000000;
		num *= 10;
		num += d;
		num *= 1000000;
		num += 58606;
	}
	num = 100058606;
	for (int s = 1; s <= 9; s++) {
		for (int d = 1; d <= 9; d++) {
			for (int e = 1; e <= 9; e++) {
				for (int i = 1; i <= 9; i++) {
					if (isPalindrom(to7System(num))) {
						cout << num << ' ' << summa7(to7System(num)) << endl;

						//cout << to7System(num) << endl;
					}
					num /= 100;
					num *= 10;
					num += i;
					num *= 10;
					num += 6;
				}
				num /= 1000000;
				num *= 10;
				num += e;
				num *= 100000;
				num += 58606;
			}
			num /= 10000000;
			num *= 10;
			num += d;
			num *= 1000000;
			num += 58606;
		}
		num /= 100000000;
		num *= 10;
		num += s;
		num *= 10000000;
		num += 58606;
	}
	num = 1000058606;
	for (int r = 1; r <= 9; r++) {
		for (int s = 1; s <= 9; s++) {
			for (int d = 1; d <= 9; d++) {
				for (int e = 1; e <= 9; e++) {
					for (int i = 1; i <= 9; i++) {
						if (isPalindrom(to7System(num))) {
							cout << num << ' ' << summa7(to7System(num)) << endl;
							//cout << to7System(num) << endl;
						}
						num /= 100;
						num *= 10;
						num += i;
						num *= 10;
						num += 6;
					}
					num /= 1000000;
					num *= 10;
					num += e;
					num *= 100000;
					num += 58606;
				}
				num /= 10000000;
				num *= 10;
				num += d;
				num *= 1000000;
				num += 58606;
			}
			num /= 100000000;
			num *= 10;
			num += s;
			num *= 10000000;
			num += 58606;
		}
		num /= 1000000000;
		num *= 10;
		num += r;
		num *= 100000000;
		num += 58606;
	}*/
	//220
	/*int count = 0;
	int num = 3850000;
	int max;
	string mask = "";
	bool flag = true;
	while (count != 5) {
		num++;
		int max;
		string mask = "";
		for (int i = 2; i < num; i++) {
			if (num % i == 0 && isSimple(i)) {
				mask += to_string(i);
				max = i;
			}
		}
		//cout << mask << endl;
		if (flag) {
			int lenght = mask.length() - 1;
			if (mask[0] == '2' && mask[1] == '7' && mask[lenght - 2] == '1' && mask[lenght] == '1') {
				cout << num << ' ' << max << endl;
				//cout << mask << endl;
				count++;
			}
		}
	}
	*/
	//221
/*int count = 0;
int num = 4679000;
while (count != 5) {
	num++;
	int max;
	string mask = "";
	for (int i = 2; i < num; i++) {
		if (num % i == 0 && isSimple(i)) {
			mask += to_string(i);
			max = i;
		}
	}
	//cout << mask << endl;
		int lenght = mask.length() - 1;
		if( (mask[0] == '2' && mask[1] == '7' && mask[lenght - 2] == '3' && mask[lenght-1] == '9') ||(mask[0]=='3' && mask[1]=='4' && mask[lenght-2]=='2'&& mask[lenght]=='7')) {
			cout << num << ' ' << max << endl;
			//cout << mask << endl;
			count++;
		}
}
*/
	//223-225
	

	/*int count = 0;
	for (int i = 3; i<1500; i += 2) {
		for (int n = 2; n <= 6; n += 2) {
			long long buf = pow(i, n);
			while (buf < 75000000) {
				buf *= 2;
			}
			if (buf < 76000000) {
				int c = 0;
				for (int d = 2; d <= buf; d += 2) {
					if (buf % d == 0)c++;
				}
				if (c%2==1) cout << buf << ' ' << i << ' ' << n << ' ' << c << endl;
			}
		}
	}*/
	
}

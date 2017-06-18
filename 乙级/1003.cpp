#include<iostream>
#include<string>
using namespace std;
int secondcase(string aim){
	int i = 0;
	for (; i<aim.size(); i++){
		if (aim[i] == 'P'&&aim[i + 1] == 'A'&&aim[i + 2] == 'T'){

			int a = 0, b = 0;
			int m = 0, n = i + 3;
			for (; m<i; m++){
				if (aim[m] != 'A')
					return 0;
			}
			a = m;
			for (; n<aim.size(); n++){
				if (aim[n] != 'A')
					return 0;
				b++;
			}

			if (a == b)
				return 1;
			else
				return 0;

		}

	}
}
int thirdcase(string aim){
	string a = "", b = "", c = "";
	string ::iterator beg = aim.end(), end=aim.end() , temp=aim.begin(), count=aim.begin();
	if (aim[0] == 'P'&& aim[1] == 'T'){
		return 0;
	}
	for (; count != aim.end(); count++){
		
		if (*count == 'P'){
			beg = count;
		}
		if (*count == 'T'){
			end = count;
		}
	}
	if (end<beg||end == aim.end()|| beg == aim.end())
		return 0;
	b.append(beg+1, end);
	a.append(temp, beg);
	c.append(end+1, aim.end());
	if (a.size()*b.size() == c.size()){
		for (int i = 0; i < b.size(); i++){
			if (b[i] != 'A')
				return 0;
		}
		for (int i = 0; i < a.size(); i++){
			if (a[i] != 'A')
				return 0;
		}
		for (int i = 0; i < c.size(); i++){
			if (c[i] != 'A')
				return 0;
		}
			return 1;
	}
	else
		return 0;
}
int main(){
	int count;
	cin >> count;
	for (int i = 0; i<count; i++){
		string aim;
		cin >> aim;
		if (aim == "PAT" || secondcase(aim) == 1 || thirdcase(aim) == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
